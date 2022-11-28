#include "homepage.h"
#include "ui_homepage.h"
#include "QPixmap"
#include "QMessageBox"
homepage::homepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::homepage)
{
    ui->setupUi(this);
    resize(1385,700);
    QPixmap icon_main("//Users/dikshantthapa/Downloads/Project_KUPOOL/images/icon.png");
    ui->pool->setPixmap(icon_main.scaled(80,80,Qt::KeepAspectRatio));

    QPixmap icon_main123("/Users/dikshantthapa/Downloads/Project_KUPOOL/images/KU_logo.png");
    ui->log_main->setPixmap(icon_main123.scaled(80,80,Qt::KeepAspectRatio));

    QPixmap icon_main1("/Users/dikshantthapa/Downloads/Project_KUPOOL/images/icon.png");
    ui->label_icons->setPixmap(icon_main1.scaled(200,200,Qt::KeepAspectRatio));

    QPixmap swimming("/Users/dikshantthapa/Downloads/Project_KUPOOL/images/swimming.png");
    ui->swimming_icon->setPixmap(swimming.scaled(141,141,Qt::KeepAspectRatio));

    QPixmap tube("Users/dikshantthapa/Downloads/Project_KUPOOL/images/Dikshant.jpeg");
    ui->tube_icon->setPixmap(tube.scaled(141,141,Qt::KeepAspectRatio));

}

homepage::~homepage()
{
    delete ui;
}

void homepage::on_export_csv_btn_clicked()
{
     QMessageBox::warning(this,"Successful","Sucessfully purchased!");
}


void homepage::on_signout_button_clicked()
{
    QMessageBox::information(this,"Thanks","Thanks For using KU_POOL");
}


void homepage::on_History_clicked()
{
        QMessageBox::warning(this,"Database","Database not connected!");
}

