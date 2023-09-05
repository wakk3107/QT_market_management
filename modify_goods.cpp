#include "modify_goods.h"
#include "ui_modify_goods.h"

modify_goods::modify_goods(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modify_goods)
{
    ui->setupUi(this);
    sql = MySQLProductManager::getInstance();
}

modify_goods::~modify_goods()
{
    delete ui;
}

void modify_goods::on_btn_query_clicked()
{

    QString ki=this->ui->cbb_kind->currentText();
    if(this->ui->cbb_kind->currentIndex()==0)
    {   QMessageBox::critical(this,"错误","种类未选择");
        return;
    }
    QString tar=this->ui->le_cnt->text();
    //提取出目标商品的信息
    auto result = sql->getProductByCategoryAndName(ki, tar);
    if(result.next()) {
        // 获取商品信息
        QString categoryName = result.value("category").toString();
        QString productName = result.value("name").toString();
        QString price = result.value("price").toString();
        QString stock = result.value("stock").toString();
        QString brand = result.value("brand").toString();
        QString manufacturer = result.value("manufacturer").toString();
        this->ui->le_name->setText(productName);
        this->ui->le_price->setText(price);
        this->ui->le_store->setText(stock);
        this->ui->le_logo->setText(brand);
        this->ui->le_maker->setText(manufacturer);

    }

    if(this->ui->le_name->text().isEmpty())
        QMessageBox::critical(this,"错误","未找到该商品！");
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

    if(sql->updateProduct(kind, name, price.toDouble(), store.toInt(), logo, maker)) {
        QMessageBox::about(this,"成功","成功修改信息！");
        emit re();
        this->hide();
    } else {
        QMessageBox::critical(this, "错误", "修改信息失败！");
    }

}
