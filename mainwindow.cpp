#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stateText->setText(state);
    ui->rangeText->setText(range);

    QLineSeries *series = new QLineSeries();
    series->append(0,0);
    series->append(1,1);
    series->append(2,2);

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle(state+" "+range);

    chartView = new QChartView();
    chartView->setRenderHint(QPainter::Antialiasing);

    ui->graphicsView->setChart(chart);

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
    chart->setTitle(state+" "+range);
}


void MainWindow::on_pushButtonLight_clicked()
{
    state="light";
    ui->stateText->setText(state);
    chart->setTitle(state+" "+range);
}


void MainWindow::on_pushButtonHour_clicked()
{
    range="hour";
    ui->rangeText->setText(range);
    chart->setTitle(state+" "+range);
}


void MainWindow::on_pushButtonDay_clicked()
{
    range="day";
    ui->rangeText->setText(range);
    chart->setTitle(state+" "+range);
}


void MainWindow::on_pushButtonWeek_clicked()
{
    range="week";
    ui->rangeText->setText(range);
    chart->setTitle(state+" "+range);
}


void MainWindow::on_pushButtonMonth_clicked()
{
    range="month";
    ui->rangeText->setText(range);
    chart->setTitle(state+" "+range);
}

void MainWindow::make_chart()
{

}

