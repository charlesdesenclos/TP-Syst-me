#include "TPSondeurMarin.h"
#include <QtWidgets/QApplication>
//*********************************************************************************************
//* Programme : TPSondeurMarin.cpp							Date : 14/11/2022
//*													Derni�re MAJ : NA
//*--------------------------------------------------------------------------------------------
//*Programmeurs :	Desenclos Charles							Classe : BTSSN2
//*					Suard Enzo
//*					 
//*--------------------------------------------------------------------------------------------
//*
//* BUT : Permet de r�cup�rer les trames GPS pendant 15 secondes et d'afficher la trame compl�te et ses parties.
//*
//*********************************************************************************************

TPSondeurMarin::TPSondeurMarin(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	// Ouverture des ports
	
	port = new QSerialPort(this);
	port->setPortName("COM1");
	port->open(QIODevice::ReadWrite);
	port->setBaudRate(QSerialPort::Baud4800);
	port->setDataBits(QSerialPort::DataBits::Data8);
	port->setParity(QSerialPort::Parity::NoParity);
	port->setStopBits(QSerialPort::StopBits::OneStop);
	port->setFlowControl(QSerialPort::NoFlowControl);
	qDebug() << "Le port connect�";

	// dur�e d'acquisition en seconde

	duree = new QTimer();
}

TPSondeurMarin::~TPSondeurMarin()
{

}

void TPSondeurMarin::lecture()
{
	// pour la dur�e
	duree->start(15000);
	QObject::connect(duree, SIGNAL(timeout()), this, SLOT(FinDureeLecture()));
	
	// pour le port

	port->clear();
	QObject::connect(port, SIGNAL(readyRead()), this, SLOT(PortLecture()));
}

void TPSondeurMarin::FinDureeLecture()
{
	// pour se d�connecter le port et la duree
	duree->stop();
	QObject::disconnect(duree, SIGNAL(timeout()), this, SLOT(FinDureeLecture()));
	QObject::disconnect(port, SIGNAL(readyRead()), this, SLOT(PortLecture()));

}
