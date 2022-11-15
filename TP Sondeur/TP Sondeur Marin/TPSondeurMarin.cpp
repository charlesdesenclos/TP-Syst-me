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

void TPSondeurMarin::connectionPort()
{
	QObject::connect(port, SIGNAL(readyRead()), this, SLOT(affichevaleur()));
}

void TPSondeurMarin::deconnectionPort()
{
	QObject::disconnect(port, nullptr, nullptr, nullptr);
}

void TPSondeurMarin::affichevaleur()
{
	QByteArray dataR = port->readAll();
	data = data + dataR.toStdString().c_str();

	QRegExp regExpProfondeur("\\$GPGGA([^\*]\*)");
	QRegExp regExpTemperature("\\$SDMTW([^\*]\*)");

	if (regExpProfondeur.indexIn(data) > -1 && regExpTemperature.indexIn(data) > -1)
	{
		//Profondeur
		
		// on d�coupe la trame pour juste avoir les valeurs pour la profondeur
		QStringList resDataListProfondeur = regExpProfondeur.capturedTexts();
		QString resDataProfondeur = resDataListProfondeur[0];
		QString profondeur = resDataProfondeur.left(resDataProfondeur.size());
		dataProfondeur = profondeur.split(QLatin1Char(','), Qt::SkipEmptyParts);

		QString Profondeur = dataProfondeur[9];

		//Affichage dans le label correspondant au label de profondeur 

		ui.LabelAfficheProfondeur->setText(Profondeur);

		// Temp�rature

		// on d�coupe la trame pour juste avoir les valeurs pour la temp�rature
		QStringList resDataListTemperature = regExpTemperature.capturedTexts();
		QString resDataTemperature = resDataListTemperature[0];
		QString temperature = resDataTemperature.left(resDataTemperature.size());
		dataListTemperature = temperature.split(QLatin1Char(','), Qt::SkipEmptyParts);

		//Affichage dans le label correspondant au label de la temp�rature

		QString Temperature = dataListTemperature[1];

		ui.LabelAfficheTemperature->setText(Temperature);
	}
	
}


