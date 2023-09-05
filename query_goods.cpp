#include "query_goods.h"
#include "ui_query_goods.h"

query_goods::query_goods(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::query_goods)
{
    ui->setupUi(this);
    sql = MySQLProductManager::getInstance();
    //初始化表格
    this->model=new QStandardItemModel;
    sql->getProductsFromDatabase(model);
}

query_goods::~query_goods()
{
    delete ui;
}
//查询按钮的成立
void query_goods::on_btn_query_clicked()
{
    //初始化表格
    this->model->clear();
    this->model=new QStandardItemModel;
    this->model->setHorizontalHeaderItem(0,new QStandardItem("商品类别"));
    this->model->setHorizontalHeaderItem(1,new QStandardItem("名称"));
    this->model->setHorizontalHeaderItem(2,new QStandardItem("价格"));
    this->model->setHorizontalHeaderItem(3,new QStandardItem("库存"));
    this->model->setHorizontalHeaderItem(4,new QStandardItem("品牌"));
    this->model->setHorizontalHeaderItem(5,new QStandardItem("生产厂家"));
    this->ui->tableView->setModel(model);
    this->ui->tableView->setColumnWidth(0,100);
    this->ui->tableView->setColumnWidth(1,160);
    this->ui->tableView->setColumnWidth(2,70);
    this->ui->tableView->setColumnWidth(3,70);
    this->ui->tableView->setColumnWidth(4,100);
    this->ui->tableView->setColumnWidth(5,212);
    int index=this->ui->cbb_method->currentIndex();
    if(index==0)
    {
        QMessageBox::critical(this,"错误","请先选择查询方式");
        return;
    }
    QString cnt=this->ui->le_cnt->text();
    //查询
    do_query(index,cnt);
    this->ui->le_cnt->clear();
    this->ui->le_cnt->setFocus();
    this->ui->cbb_method->setCurrentIndex(0);
    emit re();
}
//查询功能的实现
void query_goods::do_query(int index, QString cnt)
{
    switch(index) {
    case 1:
        display(sql->getProductByName(cnt));
        break;
    case 2:
        display(sql->getProductByCategory(cnt));
        break;
    case 3:
        display(sql->getProductByManufacturer(cnt));
        break;
    }

}
//填充表格内容
void query_goods::display(QSqlQuery result)
{
    int row = 0;
    while (result.next()) {
        QString category = result.value("category").toString();
        QString name = result.value("name").toString();
        double price = result.value("price").toDouble();
        int stock = result.value("stock").toInt();
        QString brand = result.value("brand").toString();
        QString manufacturer = result.value("manufacturer").toString();

        // 创建QStandardItem对象并设置数据
        QStandardItem* categoryItem = new QStandardItem(category);
        QStandardItem* nameItem = new QStandardItem(name);
        QStandardItem* priceItem = new QStandardItem(QString::number(price));
        QStandardItem* stockItem = new QStandardItem(QString::number(stock));
        QStandardItem* brandItem = new QStandardItem(brand);
        QStandardItem* manufacturerItem = new QStandardItem(manufacturer);

        // 添加每一行的项目
        model->setItem(row, 0, categoryItem);
        model->setItem(row, 1, nameItem);
        model->setItem(row, 2, priceItem);
        model->setItem(row, 3, stockItem);
        model->setItem(row, 4, brandItem);
        model->setItem(row, 5, manufacturerItem);

        row++;
    }

}
//初始化内存
int query_goods::read_from_flie()
{
    QFile file("goods.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return -1;
    }
    QTextStream in(&file);
    while(!in.atEnd())
    {
        QString line=in.readLine().trimmed();
        if(line=="")continue;
        goods_lines.append(line);

    }
    file.close();
    return 0;
}
