#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TPSondeurMarin.h"
#include <QObject>
#include <QSerialPort>
#include <qdebug.h>
#include <QRegExp>
#include <qtimer.h>
#include <QTime> 

class TPSondeurMarin : public QMainWindow
{
    Q_OBJECT

public:
    TPSondeurMarin(QWidget *parent = nullptr);
    ~TPSondeurMarin();

private:
    Ui::TPSondeurMarinClass ui;
	QSerialPort * port;

	QTimer * duree;


public slots:
	
	void lecture();
	void FinDureeLecture();/*
	void PortLecture();*/
};
