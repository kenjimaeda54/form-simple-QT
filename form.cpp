#include "form.h"
#include "ui_form.h"
#include "data_personal.h"

Form::Form(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}


void Form::on_pushButton_clicked()
{
    QString name,lastName,email;



    name= ui->form_name->text();
    lastName = ui->form_last_name->text(); //por ponteiros estou capturando os membros dessa winodw
    email= ui->form_email->text();

    ui->form_name->clear(); //limpando os formularios
    ui->form_last_name->clear();
    ui->form_email->clear();

    ui->form_name->setFocus(); // setar novmaente o focus no campo name

    Data_Personal Data;

    Data.Show_Data(name,lastName,email);
    Data.exec(); //essencial para executar a outra classe que no caso e o Data;

}

