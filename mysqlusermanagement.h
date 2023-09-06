#ifndef MYSQLUSERMANAGEMENT_H
#define MYSQLUSERMANAGEMENT_H

#include <QObject>
#include <QtSql>

class MySQLUserManagement : public QObject
{
    Q_OBJECT
public:
    explicit MySQLUserManagement(QObject *parent = nullptr);

    bool addUser(const QString &username, const QString &password);
    bool deleteUser(const QString &username);
    bool changePassword(const QString &username, const QString &newPassword);
    bool isLoginValid(const QString &username, const QString &password);

private:
    QSqlDatabase m_database;

    bool createTable();
};

#endif // MYSQLUSERMANAGEMENT_H
