#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QLineSeries *series = new QLineSeries();
    series->append(0, 6);
    series->append(2, 4);
    series->append(3, 8);
    series->append(7, 4);
    series->append(10, 5);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->legend()->hide();

    QChartView *chartView = new QChartView();
    chartView->setChart(chart);

    MainWindow w;


    w.setWindowTitle("Flat Monitor");
    w.show();
    return a.exec();
}
