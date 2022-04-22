# Formulário Simples com Qt
Apliquei conceitos de input e saidas de dados

## Motivação
Criar interfaces interirativas com QT, entendendo saidas e entradsa de dados


## Feature
- Para receber entrada de dados usamos o edit text do QT creator
- Para receber os dados escritos no input e preciso usar anotação de ponteiro através do objeto ui
- Existem vários métodos prontos na classe ui que podemos usar no projeto
- Usei o clear para limpeza dos dados que estão no input,setText para setar um label e o setFocus para focar novamente na tela
- Não esquecer de colocar exec() apos a criação de uma classe nossa

``` c++

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
```

##


- QT utiliza também dos arquivos .h para especiar oque os arquivos de implementação possui
- Criei um método personalizado e indiquei no arquivo .h que tipo de método seria esse 
- E no arquivo .cpp que foi implementado
- Não pode de esquecer de chamar nos cabeçalhos os arquivos .h que desejo implementar
- Nesse caso e o data_personal.h, porque foi nesse arquivo que estava o escopo de implementação do meu método Show_Data()
- Arquivo .h e apenas um escopo da implementação, quem implante nesse caso e o data_personal.cpp
- QString e um typedef para método std::string


``` c++
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

//============================================
#ifndef DATA_PERSONAL_H
#define DATA_PERSONAL_H

#include <QDialog>

namespace Ui {
class Data_Personal;
}

class Data_Personal : public QDialog
{
    Q_OBJECT

public:
    explicit Data_Personal(QWidget *parent = nullptr);
    void Show_Data(QString name,QString lastName, QString email);
    ~Data_Personal();

private:
    Ui::Data_Personal *ui;
};

//=========================
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
``` 
##
## Screen Shoot

![form.jpeg](https://github.com/kenjimaeda54/form-simple-QT/blob/develop/form.jpeg)
![dataForm.jpeg](https://github.com/kenjimaeda54/form-simple-QT/blob/develop/dataForm.jpeg)





