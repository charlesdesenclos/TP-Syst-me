#include "camera.h"
#include <QDebug>
#include <QSettings>

//*********************************************************************************************
//* Programme : camera.cpp date : 08/11/2022
//*---------------------------------------------------------------------------------------------------------
//* dernière mise a jour :
//*
//*Programmeurs : Charles Desenclos / Suard Enzo classe : BTSSN2
//*--------------------------------------------------------------------------------------------------------
//* BUT : Piloter une caméra via une aplication C++
//*Programmes associés : AUCUN
//**

Camera::Camera(QObject *parent)
{

// Link to file camera.ini
    QSettings settings("/home/debian/Camera/camera.ini",
                       QSettings::IniFormat);

// Get Values from camera.ini
QString IP = settings.value("IP").toString();

qDebug() <<  "IP = " << IP;

quint16 PortMoxa = settings.value("PortMoxa").toInt();

qDebug() <<  "Port Moxa = " << PortMoxa;

quint16 PortWebSocket = settings.value("PortWebSocket").toInt();

qDebug() <<  "Port WebSocket = " << PortWebSocket;


// Web Socket Configuration
webSocketServer = new QWebSocketServer(QStringLiteral("WebServer"), QWebSocketServer::NonSecureMode, this);


connect(webSocketServer, &QWebSocketServer::newConnection, this, &Camera::newWebConnexion);
    webSocketServer->listen(QHostAddress::AnyIPv4, PortWebSocket);

// Camera socket configuration
socket = new QTcpSocket(this);
connect(socket, &QTcpSocket::connected, this, &Camera::onSocketConnected);
    socket->connectToHost(IPMoxa, PortMoxa);

}


void Camera::onSocketConnected()
{

    qDebug() << "Socket connected";
}

void Camera::newWebConnexion()
{
    QWebSocket *webClient = webSocketServer->nextPendingConnection();
    qDebug() << "WebServer connexion ok";
    QObject::connect(webClient, &QWebSocket::disconnected, this, &Camera::webSocketDisonnected);
    QObject::connect(webClient, &QWebSocket::textMessageReceived, this, &Camera::processTextMessage);
}

void Camera::webSocketDisonnected()
{
    this->obj = qobject_cast<QWebSocket *>(sender());
    this->obj->deleteLater();
    qDebug() << "WebSocket client disconnected";
}

void Camera::processTextMessage(QString message)
{
    this->obj = qobject_cast<QWebSocket *>(sender());
    QString data = message;

    qDebug() << message;

    if(data == "camOn") {
        camOn();
    }

    if(data == "camOff") {
        camOff();
    }

    if(data == "movehaut") {
        camHaut();
    }

    if(data == "moveBas") {
        camBas();
    }

    if(data == "moveDroite") {
        camDroite();
    }

    if(data == "moveGauche") {
        camGauche();
    }

    if(data == "movementStop") {
        camMovementStop();
    }

    if(data == "moveReinitialiser") {
        camPositionReinit();
    }

    if(data == "zoomMin") {
        camZoomMinimum();
    }

    if(data == "zoomMax") {
        camZoomMaximum();
    }

    if(data == "zoomStop") {
        camZoomStop();
    }
}

void Camera::camOn() {
    // Convertion string en Hex
    QByteArray data = QByteArray::fromHex("81 01 04 00 02 FF");

    // Envoie de data pour execution de la fonction
    issue(data);
}

void Camera::camOff() {
    // Convertion string en Hex
    QByteArray data = QByteArray::fromHex("81 01 04 00 03 FF");

    //  Envoie de data pour execution de la fonction
    issue(data);

}

void Camera::camHaut() {
    // Convertion string en Hex
    QByteArray data = QByteArray::fromHex("81 01 06 01 07 07 03 01 FF");

    //  Envoie de data pour execution de la fonction
    issue(data);

}

void Camera::camBas() {
    // Convertion string en Hex
    QByteArray data = QByteArray::fromHex("81 01 06 01 10 10 03 02 FF");

    // Envoie de data pour execution de la fonction
    issue(data);

}

void Camera::camGauche() {
    // Convertion string en Hex
    QByteArray data = QByteArray::fromHex("81 01 06 01 09 14 01 03 FF");

    // Envoie de data pour execution de la fonction
    issue(data);

}

void Camera::camDroite() {
    // Convertion string en Hex
    QByteArray data = QByteArray::fromHex("81 01 06 01 10 10 02 03 FF");

    // Envoie de data pour execution de la fonction
    issue(data);

}

void Camera::camPositionReinit() {
    // Convertion string en Hex
    QByteArray data = QByteArray::fromHex("81 01 06 02 08 08 0Y 0Y 0Y 0Y 0Z 0Z 0Z 0Z FF");

    //  Envoie de data pour execution de la fonction
    issue(data);

}

void Camera::camMovementStop() {
    // Convertion string en Hex
    QByteArray data = QByteArray::fromHex("81 01 06 01 08 08 03 03 FF");

    // Envoie de data pour execution de la fonction
    issue(data);

}

void Camera::camZoomMinimum() {
    // Convertion string en Hex
    QByteArray data = QByteArray::fromHex("81 01 04 07 03 FF");

    // Envoie de data pour execution de la fonction
    issue(data);

}

void Camera::camZoomMaximum() {
    // Convertion string en Hex
    QByteArray data = QByteArray::fromHex("81 01 04 07 02 FF");

    // Envoie de data pour execution de la fonction
    issue(data);

}

void Camera::camZoomStop() {
    // Convertion string en Hex
    QByteArray data = QByteArray::fromHex("81 01 04 07 00 FF");

    // Envoie de data pour execution de la fonction
    issue(data);

}

void Camera::issue(QByteArray data)
{
    socket->write(data);
    socket->flush();
}
