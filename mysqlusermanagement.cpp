#include "MySQLUserManagement.h"

MySQLUserManagement::MySQLUserManagement(QObject *parent) : QObject(parent)
{
    m_database = QSqlDatabase::addDatabase("QMYSQL");
    m_database.setHostName("localhost");
    m_database.setPort(3306);
    m_database.setDatabaseName("market");
    m_database.setUserName("root");
    m_database.setPassword("245330");

    if (!m_database.open()) {
        qDebug() << "Failed to connect to database.";
    }

    if (!m_database.tables().contains("user")) {
        if (!createTable()) {
            qDebug() << "Failed to create user table.";
        }
    }
}

bool MySQLUserManagement::addUser(const QString &username, const QString &password)
{
    QSqlQuery query;
    query.prepare("INSERT INTO user (username, password) VALUES (?, ?)");
    query.addBindValue(username);
    query.addBindValue(password);
    return query.exec();
}

bool MySQLUserManagement::deleteUser(const QString &username)
{
    QSqlQuery query;
    query.prepare("DELETE FROM user WHERE username = ?");
    query.addBindValue(username);
    return query.exec();
}

bool MySQLUserManagement::changePassword(const QString &username, const QString &newPassword)
{
    QSqlQuery query;
    query.prepare("UPDATE user SET password = ? WHERE username = ?");
    query.addBindValue(newPassword);
    query.addBindValue(username);
    return query.exec();
}

bool MySQLUserManagement::isLoginValid(const QString &username, const QString &password)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM user WHERE username = ? AND password = ?");
    query.addBindValue(username);
    query.addBindValue(password);
    return query.exec() && query.next();
}

bool MySQLUserManagement::createTable()
{
    QSqlQuery query;
    return query.exec("CREATE TABLE user (username VARCHAR(255) PRIMARY KEY, password VARCHAR(255))");
}
