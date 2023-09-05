#ifndef MYSQLPRODUCTMANAGER_H
#define MYSQLPRODUCTMANAGER_H

#include <QtSql>
#include <QString>
#include <QStandardItemModel>
class MySQLProductManager {
public:
    static MySQLProductManager* getInstance();
    ~MySQLProductManager();

    bool addProduct(const QString& category, const QString& name, double price, int stock, const QString& brand, const QString& manufacturer);
    bool updateProduct(const QString& category, const QString& name, double price, int stock, const QString& brand, const QString& manufacturer);
    bool deleteProduct(const QString& name);
    void getProductsFromDatabase(QStandardItemModel* model);
    QSqlQuery getProductByCategoryAndName(const QString& category, const QString& name);
    QSqlQuery getProductByCategory(const QString& category);
    QSqlQuery getProductByName(const QString& name);
    QSqlQuery getProductByManufacturer(const QString& manufacturer);
private:
    MySQLProductManager();
    static MySQLProductManager* instance;
    QSqlDatabase db;

};

#endif // MYSQLPRODUCTMANAGER_H
