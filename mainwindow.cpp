#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stateText->setText(state);
    ui->rangeText->setText(range);

    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    chartView = new QChartView;
    chart = new QChart;

    QLineSeries *series = new QLineSeries;
    series->append(0, 6);
    series->append(2, 4);
    series->append(3, 8);
    series->append(7, 4);
    series->append(10, 5);
    chart->addSeries(series);

    QValueAxis *axisX = new QValueAxis;
    axisX->setTitleText("Oś X");
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis;
    axisY->setTitleText("Oś Y");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    QVBoxLayout *centralLayout = new QVBoxLayout(ui->centralwidget);
    centralLayout->addWidget(chartView);


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

