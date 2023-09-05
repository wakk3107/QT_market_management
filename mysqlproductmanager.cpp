#include "mysqlproductmanager.h"

MySQLProductManager* MySQLProductManager::instance = nullptr;

MySQLProductManager* MySQLProductManager::getInstance() {
    if (!instance) {
        instance = new MySQLProductManager();
    }
    return instance;
}

MySQLProductManager::MySQLProductManager() {
    // 连接到MySQL数据库
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost"); // 设置你的MySQL主机地址
    db.setDatabaseName("market"); // 设置你的数据库名称
    db.setUserName("root"); // 设置你的数据库用户名
    db.setPassword("245330"); // 设置你的数据库密码

    if (!db.open()) {
        qWarning() << "Failed to connect to database:" << db.lastError().text();
        return; // 如果连接失败，可以选择返回或者抛出异常
    }

    // 检查表是否存在，如果不存在，则创建它
    QSqlQuery query;
    query.prepare("CREATE TABLE IF NOT EXISTS products ("
                  "id INT AUTO_INCREMENT PRIMARY KEY,"
                  "category VARCHAR(255),"
                  "name VARCHAR(255),"
                  "price DOUBLE,"
                  "stock INT,"
                  "brand VARCHAR(255),"
                  "manufacturer VARCHAR(255)"
                  ")");
    if (!query.exec()) {
        qWarning() << "Table 'products' creation failed:" << query.lastError().text();
    }
}


MySQLProductManager::~MySQLProductManager() {
    db.close();
}

bool MySQLProductManager::addProduct(const QString& category, const QString& name, double price, int stock, const QString& brand, const QString& manufacturer) {
    // 首先检查是否已经存在具有相同名称的商品
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT name FROM products WHERE name = :name");
    checkQuery.bindValue(":name", name);
    if (checkQuery.exec() && checkQuery.next()) {
        // 商品名称已经存在
        return false;
    }

    // 商品名称不存在，可以插入新商品
    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO products (category, name, price, stock, brand, manufacturer) "
                        "VALUES (:category, :name, :price, :stock, :brand, :manufacturer)");
    insertQuery.bindValue(":category", category);
    insertQuery.bindValue(":name", name);
    insertQuery.bindValue(":price", price);
    insertQuery.bindValue(":stock", stock);
    insertQuery.bindValue(":brand", brand);
    insertQuery.bindValue(":manufacturer", manufacturer);

    return insertQuery.exec();
}


bool MySQLProductManager::updateProduct(const QString& category, const QString& name, double price, int stock, const QString& brand, const QString& manufacturer) {
    QSqlQuery query;
    query.prepare("UPDATE products SET category = :category, price = :price, stock = :stock, brand = :brand, manufacturer = :manufacturer WHERE name = :name");
    query.bindValue(":name", name);
    query.bindValue(":category", category);
    query.bindValue(":price", price);
    query.bindValue(":stock", stock);
    query.bindValue(":brand", brand);
    query.bindValue(":manufacturer", manufacturer);

    return query.exec();
}

bool MySQLProductManager::deleteProduct(const QString& name) {
    QSqlQuery query;
    query.prepare("DELETE FROM products WHERE name = :name");
    query.bindValue(":name", name);

    return query.exec();
}

void MySQLProductManager::getProductsFromDatabase(QStandardItemModel* model) {
    // 清空模型，以防它已经包含数据
    model->clear();

    QSqlQuery query("SELECT * FROM products");

    int row = 0;
    while (query.next()) {
        QString category = query.value("category").toString();
        QString name = query.value("name").toString();
        double price = query.value("price").toDouble();
        int stock = query.value("stock").toInt();
        QString brand = query.value("brand").toString();
        QString manufacturer = query.value("manufacturer").toString();

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
    // 设置表头标签（中文）
    model->setHorizontalHeaderLabels(QStringList() << "商品种类" << "商品名称" << "商品价格" << "商品库存" << "商品品牌" << "商品厂家");

}

QSqlQuery MySQLProductManager::getProductByCategoryAndName(const QString& category, const QString& name) {
    QSqlQuery query;
    query.prepare("SELECT * FROM products WHERE category = :category AND name = :name");
    query.bindValue(":category", category);
    query.bindValue(":name", name);

    if (!query.exec()) {
        qWarning() << "Failed to retrieve product:" << query.lastError().text();
    }

    return query;
}

QSqlQuery MySQLProductManager::getProductByCategory(const QString& category) {
    QSqlQuery query;
    query.prepare("SELECT * FROM products WHERE category = :category");
    query.bindValue(":category", category);

    if (!query.exec()) {
        qWarning() << "Failed to retrieve product:" << query.lastError().text();
    }

    return query;
}

QSqlQuery MySQLProductManager::getProductByName(const QString& name) {
    QSqlQuery query;
    query.prepare("SELECT * FROM products WHERE name like :name");
    query.bindValue(":name", "%" + name + "%");

    if (!query.exec()) {
        qWarning() << "Failed to retrieve product:" << query.lastError().text();
    }

    return query;
}

QSqlQuery MySQLProductManager::getProductByManufacturer(const QString& manufacturer) {
    QSqlQuery query;
    query.prepare("SELECT * FROM products WHERE manufacturer like :manufacturer");
    query.bindValue(":manufacturer", "%" + manufacturer + "%");

    if (!query.exec()) {
        qWarning() << "Failed to retrieve product:" << query.lastError().text();
    }

    return query;
}


