#include "modify_goods.h"
#include "ui_modify_goods.h"

modify_goods::modify_goods(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modify_goods)
{
    ui->setupUi(this);
}

modify_goods::~modify_goods()
{
    delete ui;
}

void modify_goods::on_btn_query_clicked()
{
    read_from_flie();
    QString tar=this->ui->le_cnt->text();
    int i=0;
    for(i=0;i<goods_lines.size();i++)
    {
        QString line=goods_lines[i].trimmed();
        QStringList subs=line.split(' ');
        if(subs[1]==tar)
        {
            this->ui->cbb_kind->setCurrentText(subs[0]);
            this->ui->le_name->setText(subs[1]);
            this->ui->le_price->setText(subs[2]);
            this->ui->le_store->setText(subs[3]);
            this->ui->le_logo->setText(subs[4]);
            this->ui->le_maker->setText(subs[5]);
            break;
        }
    }
}
int modify_goods::read_from_flie()
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
void modify_goods::on_btn_cancel_clicked()
{
    this->close();
}
//确定按钮的实现
void modify_goods::on_btn_submit_clicked()
{
    //读取用户输入
    QString kind=this->ui->cbb_kind->currentText();
    QString name=this->ui->le_name->text();
    QString price=this->ui->le_price->text();
    QString store=this->ui->le_store->text();
    QString logo=this->ui->le_logo->text();
    QString maker=this->ui->le_maker->text();
    QString cnt=kind+" "+name+' '+price+' '+store+' '+logo+' '+maker;
    //修改目标商品的内容
    int i=0;
    for(i=0;i<goods_lines.size();i++)
    {
        QString line=goods_lines[i].trimmed();
        QStringList subs=line.split(' ');
        if(subs[1]==name)
        {
            goods_lines[i]=cnt;
            break;
        }
    }
    if(renew_file()==0)
    {
        QMessageBox::about(this,"成功","成功修改信息！");
        this->ui->le_name->clear();
        this->ui->cbb_kind->setCurrentIndex(0);
        this->ui->le_price->clear();
        this->ui->le_store->clear();
        this->ui->le_logo->clear();
        this->ui->le_maker->clear();
        this->ui->le_cnt->clear();
        this->ui->le_cnt->setFocus();
    }
    emit re();
}
//更新数据文件
int modify_goods::renew_file()
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
