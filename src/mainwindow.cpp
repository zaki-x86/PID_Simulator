#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
: QMainWindow(parent)
, ui(Ui::MainWindow)
{
    ui->setupUi(this);
    m_chart = new QChart();
    m_chart->legend()->hide();
    m_chart->setTitle("PID");
    m_chart->createDefaultAxes();
    m_chart->setRenderHint(QPainter::Antialiasing);
    ui->chartView->setChart(m_chart);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_chart;
}

void MainWindow::addSeries(const QString& name)
{
    QLineSeries* series = new QLineSeries();
    m_series.append(series);
    
    series->setName(name);
    m_chart->addSeries(series);
    m_data.append(QVector<QPointF>());
}

void MainWindow::connectMarkers()
{

}

void MainWindow::plotPoint(int index, double x, double y)
{
}

void MainWindow::simulater()
{
}

void MainWindow::onSilderKpChanged(int value)
{
}

void MainWindow::onSilderKiChanged(int value)
{
}

void MainWindow::onSilderKdChanged(int value)
{
}

void MainWindow::onSpinBoxEdited()
{
}

void MainWindow::onMarkerClicked()
{
}

void MainWindow::update()
{
}



