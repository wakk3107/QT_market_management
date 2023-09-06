// RegisterWindow.h

#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QMessageBox>
#include "MySQLUserManagement.h"

class RegisterWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterWindow(QWidget *parent = nullptr);
    ~RegisterWindow();

private slots:
    void onRegisterButtonClicked();
    void onCancelButtonClicked();

private:
    QLabel *m_usernameLabel;
    QLabel *m_passwordLabel;
    QLineEdit *m_usernameLineEdit;
    QLineEdit *m_passwordLineEdit;
    QPushButton *m_registerButton;
    QPushButton *m_cancelButton;
    MySQLUserManagement *m_userManagement;
};

#endif // REGISTERWINDOW_H
