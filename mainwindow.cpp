#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QLineSeries *series = new QLineSeries();
    series->append(0,0);
    series->append(1,1);
    series->append(2,2);

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle(range+" "+state);

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
    state="temperature";
    QLineSeries *series = new QLineSeries();
    series->append(0,0);
    series->append(1,0);
    series->append(2,5);
    series->append(3,5);
    QString title = range+" "+state;
    make_chart(series, title);

}


void MainWindow::on_pushButtonPress_clicked()
{
    state="pressure";
    QLineSeries *series = new QLineSeries();
    series->append(0,0);
    series->append(1,0);
    series->append(2,5);
    series->append(3,5);
    QString title = range+" "+state;
    make_chart(series, title);

}


void MainWindow::on_pushButtonLight_clicked()
{
    state="light";
    QLineSeries *series = new QLineSeries();
    series->append(0,0);
    series->append(1,0);
    series->append(2,5);
    series->append(3,5);
    QString title = range+" "+state;
    make_chart(series, title);

}


void MainWindow::on_pushButtonHour_clicked()
{
    range="Last hour";
    QLineSeries *series = new QLineSeries();
    series->append(0,0);
    series->append(1,0);
    series->append(2,5);
    series->append(3,5);
    QString title = range+" "+state;
    make_chart(series, title);

}


void MainWindow::on_pushButtonDay_clicked()
{
    range="Last day";
    QLineSeries *series = new QLineSeries();
    series->append(0,0);
    series->append(1,0);
    series->append(2,5);
    series->append(3,5);
    QString title = range+" "+state;
    make_chart(series, title);

}


void MainWindow::on_pushButtonWeek_clicked()
{
    range="Last week";
    QLineSeries *series = new QLineSeries();
    series->append(0,0);
    series->append(1,0);
    series->append(2,5);
    series->append(3,5);
    QString title = range+" "+state;
    make_chart(series, title);

}


void MainWindow::on_pushButtonMonth_clicked()
{
    range="Last month";
    QLineSeries *series = new QLineSeries();
    series->append(0,0);
    series->append(1,0);
    series->append(2,5);
    series->append(3,5);
    QString title = range+" "+state;
    make_chart(series, title);

}

void MainWindow::make_chart(QLineSeries *series1, QString title)
{
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series1);
    chart->createDefaultAxes();
    chart->setTitle(title);

    chartView = new QChartView();
    chartView->setRenderHint(QPainter::Antialiasing);

    ui->graphicsView->setChart(chart);
}

