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
    table_init();
    read_from_flie();
    display();
    //连接刷新按钮
    connect(a,&add_goods::re,this,&control_page::refresh);
    connect(d,&del_goods::re,this,&control_page::refresh);
    connect(m,&modify_goods::re,this,&control_page::refresh);
    connect(q,&query_goods::re,this,&control_page::refresh);
    connect(b,&buy_goods::re,this,&control_page::refresh);
}
//表格初始化
void control_page::table_init()
{
    this->model=new QStandardItemModel;
    this->model->setHorizontalHeaderItem(0,new QStandardItem("商品类别"));
    this->model->setHorizontalHeaderItem(1,new QStandardItem("名称"));
    this->model->setHorizontalHeaderItem(2,new QStandardItem("价格"));
    this->model->setHorizontalHeaderItem(3,new QStandardItem("库存"));
    this->model->setHorizontalHeaderItem(4,new QStandardItem("品牌"));
    this->model->setHorizontalHeaderItem(5,new QStandardItem("生产厂家"));
    this->ui->tableView->setModel(model);
    this->ui->tableView->setColumnWidth(0,100);
    this->ui->tableView->setColumnWidth(1,100);
    this->ui->tableView->setColumnWidth(2,70);
    this->ui->tableView->setColumnWidth(3,70);
    this->ui->tableView->setColumnWidth(4,90);
    this->ui->tableView->setColumnWidth(5,150);

}
//初始化内存
int control_page::read_from_flie()
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

    qSort(goods_lines.begin(), goods_lines.end(), [](QString s1, QString s2){
        if(s1==""||s2=="")
            return false;
        QStringList subs1=s1.split(' ');
        QStringList subs2=s2.split(' ');
        return subs1[2].toInt() > subs2[2].toInt();
    });
    return 0;
}
//总览功能的实现
void control_page::display()
{
    int cur_row=0;
    for(int i=0;i<goods_lines.size();i++)
    {
        QStringList subs=goods_lines[i].split(' ');
        for(int i=0;i<subs.size();i++)
        {
            this->model->setItem(cur_row,i,new QStandardItem(subs[i]));
            this->model->item(cur_row,i)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        }
        cur_row++;
    }

}
//刷新表格
void control_page::refresh()
{
    this->a=new add_goods;
    this->q=new query_goods;
    this->d=new del_goods;
    this->m=new modify_goods;
    this->b=new buy_goods;
    connect(a,&add_goods::re,this,&control_page::refresh);
    connect(d,&del_goods::re,this,&control_page::refresh);
    connect(m,&modify_goods::re,this,&control_page::refresh);
    connect(q,&query_goods::re,this,&control_page::refresh);
    connect(b,&buy_goods::re,this,&control_page::refresh);
    delete model;
    table_init();
    read_from_flie();
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
