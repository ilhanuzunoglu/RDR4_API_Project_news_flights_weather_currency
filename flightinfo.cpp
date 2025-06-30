#include "flightinfo.h"
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

FlightInfo::FlightInfo(QObject *parent) : QObject(parent),
    manager(new QNetworkAccessManager(this)),
    apiKey("add your key here") // api key
{
    connect(manager, &QNetworkAccessManager::finished, this, &FlightInfo::onNetworkReply);
}

void FlightInfo::requestFlightData(const QString &city)
{
    QString airportCode = mapCityToAirportCode(city);
    if(airportCode.isEmpty()) {
        emit flightDataReady("Desteklenmeyen şehir.");
        return;
    }

    QString url = QString("http://api.aviationstack.com/v1/flights?access_key=%1&arr_iata=%2")
            .arg(apiKey)
            .arg(airportCode);

    manager->get(QNetworkRequest(QUrl(url)));
}

void FlightInfo::onNetworkReply(QNetworkReply *reply)
{
    if(reply->error()) {
        emit flightDataReady("API Hatası: " + reply->errorString());
        reply->deleteLater();
        return;
    }

    QByteArray response = reply->readAll();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(response);
    if(jsonDoc.isNull() || !jsonDoc.isObject()) {
        emit flightDataReady("Geçersiz API cevabı.");
        reply->deleteLater();
        return;
    }

    QJsonObject obj = jsonDoc.object();
    QJsonArray dataArray = obj["data"].toArray();

    if(dataArray.isEmpty()) {
        emit flightDataReady("Bugün uçuş bilgisi bulunamadı.");
        reply->deleteLater();
        return;
    }

    QString result;
    for (const QJsonValue &value : dataArray) {
        QJsonObject flight = value.toObject();

        QJsonObject flightObj = flight["flight"].toObject();
        QString flightNumber = flightObj["iata"].toString();

        QJsonObject airlineObj = flight["airline"].toObject();
        QString airline = airlineObj["name"].toString();

        QJsonObject departureObj = flight["departure"].toObject();
        QString departure = departureObj["airport"].toString();

        QJsonObject arrivalObj = flight["arrival"].toObject();
        QString arrival = arrivalObj["airport"].toString();

        QString status = flight["flight_status"].toString();

        result += QString("Uçuş: %1\nHavayolu: %2\nKalkış: %3\nVarış: %4\nDurum: %5\n\n")
                .arg(flightNumber)
                .arg(airline)
                .arg(departure)
                .arg(arrival)
                .arg(status);
    }

    emit flightDataReady(result);
    reply->deleteLater();
}

QString FlightInfo::mapCityToAirportCode(const QString &city)
{
    // Kendi eşlemenizi yapın, örnek:
    if(city == "İstanbul") return "IST";
    if(city == "Londra") return "LHR";
    if(city == "New York") return "JFK";
    if(city == "Tokyo") return "HND";
    return "";
}
