#include "query_goods.h"
#include "ui_query_goods.h"

query_goods::query_goods(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::query_goods)
{
    ui->setupUi(this);
    if(read_from_flie()==-1)
    {
        QMessageBox::critical(this,"错误","文件打开失败，请重试");
    }
    else
        this->close();
    //初始化表格
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
    this->ui->tableView->setColumnWidth(5,200);
    this->ui->le_cnt->setFocus();
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
void query_goods::do_query(int index,QString cnt)
{
    int cur_row=0;
    int i=0;
    for(i=0;i<goods_lines.size();i++)
    {
        QString line=goods_lines[i].trimmed();
        QStringList subs=line.split(' ');
        //按查询方法查询
        switch(index)
        {
        case 1:
            if(cnt==subs[1])
            {
                display(cur_row,subs);
                cur_row++;
            }

            break;
        case 2:
            if(cnt==subs[0])
            {
                display(cur_row,subs);
                cur_row++;
            }
            break;
        case 3:
            if(cnt==subs[5])
            {
                display(cur_row,subs);
                cur_row++;
            }
            break;
        default:
            QMessageBox::critical(this,"错误","未找到该商品！");
            break;

        }
    }
}
//填充表格内容
void query_goods::display(int row,QStringList subs)
{
    int i=0;
    for(i=0;i<6;i++)
    {
        this->model->setItem(row,i,new QStandardItem(subs[i]));
        this->model->item(row,i)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
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
