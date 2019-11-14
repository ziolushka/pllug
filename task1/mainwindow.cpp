#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"
#include <QRegExpValidator>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}
void MainWindow::compare_number(double num)
{
    if (num==0)
    {
         MainWindow::ui->label_2->setText("So, your number is zero");
    }
    else if (num>0)
    {
         MainWindow::ui->label_2->setText("So, your number is possitive");
    }

    else {
         MainWindow::ui->label_2->setText("So, your number is negative");
    }

   if( num!=0 && num == floor(num))
    {
      MainWindow::ui->label_2->setText(MainWindow::ui->label_2->text() + " integer");
      int numm = floor(num);
      if(numm%2 == 0)
     {
       MainWindow::ui->label_2->setText(MainWindow::ui->label_2->text() + " even");
     }
   }

       MainWindow::ui->label_2->setText( MainWindow::ui->label_2->text() + ".");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{

    QRegExpValidator* regex = new QRegExpValidator(QRegExp("\\-{0,1}[0-9]*\\.[0-9]*"));
    ui->lineEdit->setLocale(QLocale::C);
    ui->lineEdit->setValidator(regex);
    QLocale::setDefault(QLocale::C);
    n = MainWindow::ui->lineEdit->text().toDouble();
    compare_number(n);

}
