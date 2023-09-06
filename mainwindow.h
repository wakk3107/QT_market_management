#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"add_goods.h"
#include"query_goods.h"
#include"del_goods.h"
#include"modify_goods.h"
#include"control_page.h"
#include "registerwindow.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void on_action_add_triggered();

    void on_action_query_triggered();

    void on_action_del_triggered();

    void on_action_modify_triggered();

    void on_btn_cancel_clicked();

    void on_btn_login_clicked();

private slots:
    void on_b_register_clicked();

private:
    Ui::MainWindow *ui;
    control_page* cp;
};

#endif // MAINWINDOW_H
