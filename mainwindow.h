#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>

#include "flightinfo.h"
#include "weatherinfo.h"
#include "currencyinfo.h"
#include "newsinfo.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnFlightInfo_clicked();
    void on_btnWeather_clicked();
    void on_btnCurrency_clicked();
    void on_btnNews_clicked();

    void handleFlightInfoReady(const QString &info);
    void handleWeatherInfoReady(const QString &info);
    void handleCurrencyInfoReady(const QString &info);
    void handleNewsInfoReady(const QString &info);

private:
    Ui::MainWindow *ui;

    FlightInfo *flightInfo;
    WeatherInfo *weatherInfo;
    CurrencyInfo *currencyInfo;
    NewsInfo *newsInfo;

    void setupConnections();
    QString currentCity() const;
};

#endif // MAINWINDOW_H
