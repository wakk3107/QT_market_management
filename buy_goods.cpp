#include "buy_goods.h"
#include "ui_buy_goods.h"

buy_goods::buy_goods(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buy_goods)
{
    ui->setupUi(this);
    sql = MySQLProductManager::getInstance();
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
        this->ui->cbb_kind_2->setCurrentText(categoryName);
        this->ui->le_name->setText(productName);
        this->ui->le_price->setText(price);
        this->ui->le_store->setText(stock);
        this->ui->le_logo->setText(brand);
        this->ui->le_maker->setText(manufacturer);

    }

    if(this->ui->le_name->text().isEmpty())
        QMessageBox::critical(this,"错误","未找到该商品！");
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

    //遍历数据，寻找符合条件的商品

    if(store_num >= num)//判断库存是否充足
    {
        int now_store = store_num-num;
        if(sql->updateProduct(kind, name, price.toDouble(), now_store, logo, maker)) {
            QMessageBox::about(this,"成功","购买成功！");
            this->ui->le_name->clear();
            this->ui->cbb_kind_2->setCurrentIndex(0);
            this->ui->le_price->clear();
            this->ui->le_store->clear();
            this->ui->le_logo->clear();
            this->ui->le_maker->clear();
            this->ui->le_cnt->clear();
            this->ui->le_cnt->setFocus();
            emit re();//触发信号，刷新数据总览
        }
    }
    else
    {
        QMessageBox::critical(this,"错误","库存不足！");
    }
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
