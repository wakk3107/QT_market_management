#include "add_goods.h"
#include "ui_add_goods.h"

add_goods::add_goods(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_goods)
{
    ui->setupUi(this);
}

add_goods::~add_goods()
{
    delete ui;
}
//取消按钮的实现
void add_goods::on_btn_cancel_clicked()
{
    this->close();
}
//添加按钮的实现
void add_goods::on_btn_add_clicked()
{
    //获取用户输入
    QString kind=this->ui->cbb_kind->currentText();
    QString name=this->ui->le_name->text();
    QString price=this->ui->le_price->text();
    QString store=this->ui->le_store->text();
    QString logo=this->ui->le_logo->text();
    QString maker=this->ui->le_maker->text();
    QString content=kind+" "+name+" "+price+" "+store+" "+logo+" "+maker+"\n";
    if(this->ui->cbb_kind->currentIndex()==0||name==""||price==""||store==""||logo==""||maker=="")
    {
        QMessageBox::critical(this,"错误","信息填写不完整");
    }
    else
    {
        int ret=QMessageBox::question(this,"请确认信息","商品种类:  "+kind+"\n\n"+"商品名称:  "+name+"\n\n"+"商品价格:  "+price+"\n\n"+"商品库存:  "+store+"\n\n"+"商品品牌:  "+logo+"\n\n"+"商品厂家:  "+maker,"确认","取消");
        if(ret==0)
        {       //更新文件
                this->write_to_file(content);
                this->clear_user_intface();
                QMessageBox::about(this,"成功","成功添加商品");
        }

    }
    emit re();
}
//bool add_goods::is_find(QString tar)
//{
//    QFile file("goods.txt");
//    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
//    {
//        QMessageBox::critical(this,"错误","文件打开失败！信息未保存！");
//        return 0;
//    }
//    QTextStream in(&file);
//    while(!in.atEnd())
//    {
//        QString line=in.readLine().trimmed();
//        QStringList subs=line.split(' ');
//        if(subs[1]==tar)
//        {
//            QMessageBox::critical(this,"错误","该商品已存在");
//            return 0;
//        }


//    }
//    file.close();
//    return 1;
//}
//更新文件功能的实现
void add_goods::write_to_file(QString cnt)
{
    QFile file("goods.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text))
    {
        QMessageBox::critical(this,"错误","文件打开失败！信息未保存！");
        return;
    }


    QTextStream out(&file);
    out<<cnt;
    file.close();
}
//清除输入框
void add_goods::clear_user_intface()
{
    this->ui->le_name->clear();
    this->ui->le_price->clear();
    this->ui->cbb_kind->setCurrentIndex(0);
    this->ui->le_store->clear();
    this->ui->le_logo->clear();
    this->ui->le_maker->clear();
    this->ui->le_name->setFocus();
}
