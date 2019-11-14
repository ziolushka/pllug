#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void compare_number(double num);
    double n ;
    ~MainWindow();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
