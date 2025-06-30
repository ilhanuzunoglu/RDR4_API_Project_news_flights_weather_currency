#ifndef FLIGHTINFO_H
#define FLIGHTINFO_H

#include <QObject>
#include <QNetworkAccessManager>

class FlightInfo : public QObject
{
    Q_OBJECT
public:
    explicit FlightInfo(QObject *parent = nullptr);

    void requestFlightData(const QString &city);

signals:
    void flightDataReady(const QString &info);

private slots:
    void onNetworkReply(QNetworkReply *reply);

private:
    QNetworkAccessManager *manager;
    QString apiKey;

    QString mapCityToAirportCode(const QString &city);
};

#endif // FLIGHTINFO_H
