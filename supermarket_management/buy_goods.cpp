#include "buy_goods.h"
#include "ui_buy_goods.h"

buy_goods::buy_goods(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buy_goods)
{
    ui->setupUi(this);
}

buy_goods::~buy_goods()
{
    delete ui;
}
//取消按钮的实现
void buy_goods::on_btn_cancel_clicked()
{
    this->close();
}
//查询按钮的实现
void buy_goods::on_btn_query_clicked()
{
    read_from_flie();//从文件中读取，初始化内存数据
    QString ki=this->ui->cbb_kind->currentText();
    if(this->ui->cbb_kind->currentIndex()==0)
    {   QMessageBox::critical(this,"错误","种类未选择");
        return;
    }
    QString tar=this->ui->le_cnt->text();
    int i=0;
    //提取出目标商品的信息
    for(i=0;i<goods_lines.size();i++)
    {
        QString line=goods_lines[i].trimmed();
        QStringList subs=line.split(' ');
        if(subs[0]==ki&&subs[1]==tar)
        {
            this->ui->cbb_kind_2->setCurrentText(subs[0]);
            this->ui->le_name->setText(subs[1]);
            this->ui->le_price->setText(subs[2]);
            this->ui->le_store->setText(subs[3]);
            this->ui->le_logo->setText(subs[4]);
            this->ui->le_maker->setText(subs[5]);
            break;
        }
    }
    if(this->ui->le_name->text().isEmpty())
        QMessageBox::critical(this,"错误","未找到该商品！");
}
int buy_goods::read_from_flie()
{
    QFile file("goods.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return -1;
    }
    QTextStream in(&file);
    goods_lines.clear();
    while(!in.atEnd())
    {
        QString line=in.readLine().trimmed();
        if(line=="")continue;
        goods_lines.append(line);

    }
    file.close();
    return 0;
}
//购买按钮的实现
void buy_goods::on_btn_buy_clicked()
{
    bool Ok = false;
    int num=QInputDialog::getText(this,
                                      "购买商品",
                                      "请输入要购买的数量",
                                      QLineEdit::Normal,
                                      "1",
                                      &Ok
                                      ).toInt();

    if(Ok==false) return;
    QString kind=this->ui->cbb_kind->currentText();
    QString name=this->ui->le_name->text();
    QString price=this->ui->le_price->text();
    QString store=this->ui->le_store->text();
    int store_num=store.toInt();
    QString logo=this->ui->le_logo->text();
    QString maker=this->ui->le_maker->text();
    int i=0;
    //遍历数据，寻找符合条件的商品
    for(i=0;i<goods_lines.size();i++)
    {
        QString line=goods_lines[i].trimmed();
        QStringList subs=line.split(' ');
        if(subs[0]==kind&&subs[1]==name)//判断是否为目标数据
        {
            if(subs[3].toInt()>=num)//判断库存是否充足
            {
                QString now_store=QString::number(store_num-num);
                QString cnt=kind+" "+name+' '+price+' '+now_store+' '+logo+' '+maker;
                goods_lines[i]=cnt;
                break;
            }
            else
                QMessageBox::critical(this,"错误","库存不足！");


        }
    }
    if(renew_file()==0)//更新数据文件，若成功则提示购买成功
    {
        QMessageBox::about(this,"成功","购买成功！");
        this->ui->le_name->clear();
        this->ui->cbb_kind_2->setCurrentIndex(0);
        this->ui->le_price->clear();
        this->ui->le_store->clear();
        this->ui->le_logo->clear();
        this->ui->le_maker->clear();
        this->ui->le_cnt->clear();
        this->ui->le_cnt->setFocus();
    }
    emit re();//触发信号，刷新数据总览
}
int buy_goods::renew_file()
{
    //覆盖到原文件中
    QFile f("goods.txt");
    if (!f.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::critical(this,"错误","文件打开失败！信息未保存！");
        return -1;
    }

    for(int i=0;i<goods_lines.size();i++)
    {
        QTextStream out(&f);
        out<<goods_lines[i];
        out<<"\n";

    }
    f.close();
    return 0;

}
