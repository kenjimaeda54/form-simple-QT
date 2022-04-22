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

#endif // DATA_PERSONAL_H
