#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    flightInfo(new FlightInfo(this)),
    weatherInfo(new WeatherInfo(this)),
    currencyInfo(new CurrencyInfo(this)),
    newsInfo(new NewsInfo(this))
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0); // Flight page başlangıçta

    setupConnections();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupConnections()
{
    connect(ui->btnFlightInfo, &QPushButton::clicked, this, &MainWindow::on_btnFlightInfo_clicked);
    connect(ui->btnWeather, &QPushButton::clicked, this, &MainWindow::on_btnWeather_clicked);
    connect(ui->btnCurrency, &QPushButton::clicked, this, &MainWindow::on_btnCurrency_clicked);
    connect(ui->btnNews, &QPushButton::clicked, this, &MainWindow::on_btnNews_clicked);

    connect(flightInfo, &FlightInfo::flightDataReady, this, &MainWindow::handleFlightInfoReady);
    connect(weatherInfo, &WeatherInfo::weatherDataReady, this, &MainWindow::handleWeatherInfoReady);
    connect(currencyInfo, &CurrencyInfo::currencyDataReady, this, &MainWindow::handleCurrencyInfoReady);
    connect(newsInfo, &NewsInfo::newsDataReady, this, &MainWindow::handleNewsInfoReady);
}

QString MainWindow::currentCity() const
{
    return ui->cityComboBox->currentText();
}

void MainWindow::on_btnFlightInfo_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageFlight);
    flightInfo->requestFlightData(currentCity());
    ui->textFlightInfo->setText("Yükleniyor...");
}

void MainWindow::on_btnWeather_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageWeather);
    weatherInfo->requestWeatherData(currentCity());
    ui->textWeatherInfo->setText("Yükleniyor...");
}

void MainWindow::on_btnCurrency_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageCurrency);
    currencyInfo->requestCurrencyData(currentCity());
    ui->textCurrencyInfo->setText("Yükleniyor...");
}

void MainWindow::on_btnNews_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageNews);
    newsInfo->requestNewsData(currentCity());
    ui->textNewsInfo->setText("Yükleniyor...");
}

void MainWindow::handleFlightInfoReady(const QString &info)
{
    ui->textFlightInfo->setText(info);
}

void MainWindow::handleWeatherInfoReady(const QString &info)
{
    ui->textWeatherInfo->setText(info);
}

void MainWindow::handleCurrencyInfoReady(const QString &info)
{
    ui->textCurrencyInfo->setText(info);
}

void MainWindow::handleNewsInfoReady(const QString &info)
{
    ui->textNewsInfo->setText(info);
}
