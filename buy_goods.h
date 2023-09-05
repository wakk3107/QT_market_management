#ifndef BUY_GOODS_H
#define BUY_GOODS_H
#include <QDialog>
#include<QString>
#include<QDebug>
#include<QFile>
#include<QIODevice>
#include<QTextStream>
#include<QMessageBox>
#include<QInputDialog>
namespace Ui {
class buy_goods;
}

class buy_goods : public QDialog
{
    Q_OBJECT

public:
    explicit buy_goods(QWidget *parent = 0);
    ~buy_goods();

private slots:
    void on_btn_cancel_clicked();
    int renew_file();
    void on_btn_query_clicked();
    int read_from_flie();

    void on_btn_buy_clicked();
signals:
    void re();
private:
    Ui::buy_goods *ui;
    QList<QString> goods_lines;
};

#endif // BUY_GOODS_H
