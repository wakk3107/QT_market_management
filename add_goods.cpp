#include "add_goods.h"
#include "ui_add_goods.h"

add_goods::add_goods(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_goods)
{
    ui->setupUi(this);
    sql = MySQLProductManager::getInstance();
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
    double price=this->ui->le_price->text().toDouble();
    int store=this->ui->le_store->text().toInt();
    QString logo=this->ui->le_logo->text();
    QString maker=this->ui->le_maker->text();
    if(sql->addProduct(kind, name, price, store, logo, maker))
    {

        QMessageBox::about(this,"成功","成功添加商品");
        clear_user_intface();
        this->hide();
    }
    else
    {
        QMessageBox::critical(this,"错误","插入失败,商品或已存在");
        return;
    }
    emit re();
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
