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
    std::string get_range(void)const{return range;}

private slots:
    void on_pushButtonTemp_clicked();

    void on_pushButtonPress_clicked();

    void on_pushButtonLight_clicked();

    void on_pushButtonHour_clicked();

    void on_pushButtonDay_clicked();

    void on_pushButtonWeek_clicked();

    void on_pushButtonMonth_clicked();

private:
    Ui::MainWindow *ui;
    std::string state="temp";
    std::string range="hour";

};
#endif // MAINWINDOW_H
