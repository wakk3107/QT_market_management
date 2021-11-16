#ifndef ADD_GOODS_H
#define ADD_GOODS_H

#include <QDialog>
#include<QString>
#include<QDebug>
#include<QMessageBox>
#include<QPushButton>
#include<QList>
#include<QAbstractButton>
#include<QFile>
#include<QTextStream>
#include<QIODevice>
namespace Ui {
class add_goods;
}

class add_goods : public QDialog
{
    Q_OBJECT

public:
    explicit add_goods(QWidget *parent = 0);
    ~add_goods();

public slots:
    void on_btn_cancel_clicked();
//    bool is_find(QString tar);
    void on_btn_add_clicked();
    void write_to_file(QString cnt);
    void clear_user_intface();
signals:
    void re();
private:
    Ui::add_goods *ui;
};

#endif // ADD_GOODS_H
