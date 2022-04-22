#ifndef FORM_H
#define FORM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Form; }
QT_END_NAMESPACE

class Form : public QMainWindow
{
    Q_OBJECT

public:
    Form(QWidget *parent = nullptr);
    ~Form();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Form *ui;
};
#endif // FORM_H
