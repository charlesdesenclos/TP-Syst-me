#ifndef CAMERA_H
#define CAMERA_H

#include <QTcpSocket>
#include <QtWebSockets/QtWebSockets>
#include "QtWebSockets/qwebsocketserver.h"
#include "QtWebSockets/qwebsocket.h"
#include <QDebug>
#include <QtCore>
#include <QObject>

class Camera : public QObject
{

    public:
        Camera(QObject *parent = Q_NULLPTR);

    private:

        QTcpSocket *socket;
        QWebSocketServer *webSocketServer;
        QWebSocket * obj;

    public slots:
        void issue(QByteArray data);

        void onSocketConnected();
        void newWebConnexion();
        void processTextMessage(QString message);
        void webSocketDisonnected();

    // Camera functions

        void camOn();
        void camOff();

    // Camera movement functions

        void camDroite();
        void camGauche();
        void camHaut();
        void camBas();
        void camMovementStop();

        void camPositionReinit();

    // Camera zoom functions

        void camZoomMinimum();
        void camZoomMaximum();
        void camZoomStop();
};

#endif // CAMERA_H
