#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    std::string get_state(void)const{return state;}

private slots:
    void on_pushButtonTemp_clicked();

private:
    Ui::MainWindow *ui;
    std::string state="temp";

};
#endif // MAINWINDOW_H
