#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "homepage.h"
#include "QPixmap"
#include "QMessageBox"
#include "QDesktopServices"

mainwindow::mainwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainwindow)
{
    ui->setupUi(this);
    resize(630,420);
    QPixmap passicon("/Users/dikshantthapa/Downloads/Project_KUPOOL/images/lock.png");
    ui->loginPasswordIcon->setPixmap(passicon.scaled(30,30,Qt::KeepAspectRatio));

    QPixmap usernameicon("/Users/dikshantthapa/Downloads/Project_KUPOOL/images/user_green.png");
    ui->loginUsernameIcon->setPixmap(usernameicon.scaled(30,30,Qt::KeepAspectRatio));

    QPixmap kuicon("/Users/dikshantthapa/Downloads/Project_KUPOOL/images/icon.png");
    ui->icon->setPixmap(kuicon.scaled(80,80,Qt::KeepAspectRatio));

    QPixmap ku_logo("/Users/dikshantthapa/Downloads/Project_KUPOOL/images/KU_LOGO.png");
    ui->KULOGO->setPixmap(ku_logo.scaled(80,80,Qt::KeepAspectRatio));

    QPixmap windowBG("/Users/dikshantthapa/Downloads/Project_KUPOOL/images/bg.png");
    windowBG = windowBG.scaled(650,700,Qt::KeepAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, windowBG);
    this->setPalette(palette);
}

mainwindow::~mainwindow()
{
    delete ui;
}


void mainwindow::on_loginButton_clicked()
{
    QString username = ui->loginUsernameInput->text();
    QString password = ui->loginPasswordInput->text();

    if(username=="admin" && password=="admin")
{
    homepage login_trigger;
    login_trigger.setModal(true);
    close();
    login_trigger.exec();
}else{
        QMessageBox::warning(this,"Login Failed","Username or password is incorrect!");
    }
}

void mainwindow::on_forgot_password_clicked()
{
    QMessageBox::warning(this,"ERROR","Contact the administration!");
}

