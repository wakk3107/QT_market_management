#include "control_page.h"
#include "ui_control_page.h"

control_page::control_page(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::control_page)
{
    this->a=new add_goods;
    this->q=new query_goods;
    this->d=new del_goods;
    this->m=new modify_goods;
    this->b=new buy_goods;
    ui->setupUi(this);
    this->model=new QStandardItemModel;
    sql = MySQLProductManager::getInstance();
    display();
    this->ui->tableView->setModel(model);
    //连接刷新按钮
    connect(a,&add_goods::re,this,&control_page::refresh);
    connect(d,&del_goods::re,this,&control_page::refresh);
    connect(m,&modify_goods::re,this,&control_page::refresh);
    connect(q,&query_goods::re,this,&control_page::refresh);
    connect(b,&buy_goods::re,this,&control_page::refresh);
}

//总览功能的实现
void control_page::display()
{
    sql->getProductsFromDatabase(model);
}
//刷新表格
void control_page::refresh()
{
    display();
}
control_page::~control_page()
{
    delete ui;
}
//各个按钮的实现
void control_page::on_btn_add_clicked()
{

    a->show();
}

void control_page::on_btn_del_clicked()
{

    d->show();

}

void control_page::on_btn_modify_clicked()
{

    m->show();
}

void control_page::on_btn_query_clicked()
{

    q->show();
}

void control_page::on_btn_buy_clicked()
{
    b->show();
}
