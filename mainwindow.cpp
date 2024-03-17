#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonTemp_clicked()
{
    state="temp";
}


void MainWindow::on_pushButtonPress_clicked()
{
    state="press";
}


void MainWindow::on_pushButtonLight_clicked()
{
    state="light";
}

