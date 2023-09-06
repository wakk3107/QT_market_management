#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_add_triggered()
{
    add_goods a;
    a.exec();
}

void MainWindow::on_action_query_triggered()
{
    query_goods q;
    q.exec();
}

void MainWindow::on_action_del_triggered()
{
    del_goods d;
    d.exec();
}

void MainWindow::on_action_modify_triggered()
{
    modify_goods m;
    m.exec();
}

void MainWindow::on_btn_cancel_clicked()
{
    this->close();
}

void MainWindow::on_btn_login_clicked()
{
    MySQLUserManagement valid;

    if(valid.isLoginValid(this->ui->le_user->text(), this->ui->le_passwd->text()))
    {
     cp=new control_page();
     cp->show();
    this->close();
    }
    else
    {
        QMessageBox::critical(this,"错误","账号或密码错误");
    }
}

void MainWindow::on_b_register_clicked()
{
    RegisterWindow r;
    r.exec();
}
