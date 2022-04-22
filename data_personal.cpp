#include "data_personal.h"
#include "ui_data_personal.h"

Data_Personal::Data_Personal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Data_Personal)
{
    ui->setupUi(this);
}

Data_Personal::~Data_Personal()
{
    delete ui;
}

void Data_Personal::Show_Data(QString name, QString lastName, QString email)
{


    ui->labbel_name->setText(name);
    ui->label_last_name->setText(lastName);
    ui->label_email->setText(email);

}
