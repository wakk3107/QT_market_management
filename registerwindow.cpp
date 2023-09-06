// RegisterWindow.cpp

#include "RegisterWindow.h"

RegisterWindow::RegisterWindow(QWidget *parent) : QDialog(parent)
{
    m_usernameLabel = new QLabel("Username:", this);
    m_usernameLabel->setGeometry(100, 50, 100, 30);

    m_passwordLabel = new QLabel("Password:", this);
    m_passwordLabel->setGeometry(100, 100, 100, 30);

    m_usernameLineEdit = new QLineEdit(this);
    m_usernameLineEdit->setGeometry(200, 50, 200, 30);

    m_passwordLineEdit = new QLineEdit(this);
    m_passwordLineEdit->setGeometry(200, 100, 200, 30);
    m_passwordLineEdit->setEchoMode(QLineEdit::Password);

    m_registerButton = new QPushButton("Register", this);
    m_registerButton->setGeometry(150, 150, 100, 30);

    m_cancelButton = new QPushButton("Cancel", this);
    m_cancelButton->setGeometry(300, 150, 100, 30);

    m_userManagement = new MySQLUserManagement(this);

    connect(m_registerButton, &QPushButton::clicked, this, &RegisterWindow::onRegisterButtonClicked);
    connect(m_cancelButton, &QPushButton::clicked, this, &RegisterWindow::onCancelButtonClicked);
}

RegisterWindow::~RegisterWindow()
{
    delete m_usernameLabel;
    delete m_passwordLabel;
    delete m_usernameLineEdit;
    delete m_passwordLineEdit;
    delete m_registerButton;
    delete m_cancelButton;
    delete m_userManagement;
}

void RegisterWindow::onRegisterButtonClicked()
{
    QString username = m_usernameLineEdit->text();
    QString password = m_passwordLineEdit->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter username and password.");
        return;
    }

    if (m_userManagement->isLoginValid(username, password)) {
        QMessageBox::warning(this, "Error", "Username already exists.");
    } else {
        if (m_userManagement->addUser(username, password)) {
            QMessageBox::information(this, "Success", "Registration successful.");
        } else {
            QMessageBox::warning(this, "Error", "Failed to register.");
        }
    }
}

void RegisterWindow::onCancelButtonClicked()
{
    this->close();
}
