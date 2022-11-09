#ifndef CAMERA_H
#define CAMERA_H

#include <qtcpsocket.h>
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
     
        QWebSocket * obj;

    public slots:
        void issue(QByteArray data);

        void onSocketConnected();
     
        void processTextMessage(QString message);
        

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
