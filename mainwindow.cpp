#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stateText->setText(state);
    ui->rangeText->setText(range);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonTemp_clicked()
{
    state="temp";
    ui->stateText->setText(state);

}


void MainWindow::on_pushButtonPress_clicked()
{
    state="press";
    ui->stateText->setText(state);
}


void MainWindow::on_pushButtonLight_clicked()
{
    state="light";
    ui->stateText->setText(state);
}


void MainWindow::on_pushButtonHour_clicked()
{
    range="hour";
    ui->rangeText->setText(range);
}


void MainWindow::on_pushButtonDay_clicked()
{
    range="day";
    ui->rangeText->setText(range);
}


void MainWindow::on_pushButtonWeek_clicked()
{
    range="week";
    ui->rangeText->setText(range);
}


void MainWindow::on_pushButtonMonth_clicked()
{
    range="month";
    ui->rangeText->setText(range);
}

