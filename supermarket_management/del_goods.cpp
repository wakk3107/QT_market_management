#include "del_goods.h"
#include "ui_del_goods.h"

del_goods::del_goods(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::del_goods)
{
    ui->setupUi(this);
    this->ui->btn_del->setDefault(true);
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
    QString tar1=this->ui->cbb_kind->currentText();
    QString ret=find_from_files(tar,tar1);
    if(ret=="没找到")
    {
        QMessageBox::critical(this,"错误","未找到该商品！");
    }
    else
    {
        QStringList subs=ret.split(' ');
        int flag=QMessageBox::question(this,"请确认是否删除该商品信息","类别:  "+subs[0]+"\n\n"+"名称:  "+subs[1]+"\n\n"+"价格:  "+subs[2]+"\n\n"+"库存:  "+subs[3]+"\n\n"+"品牌:  "+subs[4]+"\n\n"+"生产厂家:  "+subs[5],"确认","取消");
        if(flag==0)
        {
            del(ret);
            QMessageBox::about(this,"成功","成功删除该商品！");
            this->ui->le_name->clear();
            this->ui->le_name->setFocus();
            this->ui->cbb_kind->setCurrentIndex(0);
        }

    }
    emit re();
}
//寻找目标商品功能的实现
QString del_goods::find_from_files(QString cnt,QString cnt1)
{
    //加载进内存
    read_from_flie();
    int i=0;
    int size=goods_lines.size();
    for(i=0;i<size;i++)
    {
        QString line=goods_lines[i].trimmed();
        if(line=="")continue;
        QStringList subs=line.split(' ');
        if(subs[1]==cnt&&subs[0]==cnt1)
        {
            return line;
        }
    }
    return "没找到";
}
//初始化内存
int del_goods::read_from_flie()
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
//删除功能的实现
void del_goods::del(QString subs)
{
    //覆盖到原文件中
    QFile f("goods.txt");
    if (!f.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::critical(this,"错误","文件打开失败！信息未保存！");
        return;
    }

    for(int i=0;i<goods_lines.size();i++)
    {
        QString temp=goods_lines[i].trimmed();
        if(temp==subs) continue;
        QTextStream out(&f);
        out<<goods_lines[i];
        out<<"\n";

    }
    f.close();
   return;

}
