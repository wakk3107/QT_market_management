#include "del_goods.h"
#include "ui_del_goods.h"

del_goods::del_goods(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::del_goods)
{
    ui->setupUi(this);
    this->ui->btn_del->setDefault(true);
    sql = MySQLProductManager::getInstance();
}

del_goods::~del_goods()
{
    delete ui;
}
//取消按钮的实现
void del_goods::on_btn_cancel_clicked()
{
    this->close();
}
//删除按钮的实现
void del_goods::on_btn_del_clicked()
{
    //获取目标商品信息
    QString tar=this->ui->le_name->text();
    if(sql->deleteProduct(tar))
    {

        QMessageBox::about(this,"成功", "成功删除商品");
        this->hide();
    }
    else
    {
        QMessageBox::critical(this,"错误", "删除失败");
        return;
    }
    emit re();
}

