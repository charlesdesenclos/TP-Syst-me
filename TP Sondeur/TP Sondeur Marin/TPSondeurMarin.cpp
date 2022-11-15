#include "TPSondeurMarin.h"
#include <QtWidgets/QApplication>
//*********************************************************************************************
//* Programme : TPSondeurMarin.cpp							Date : 14/11/2022
//*													Dernière MAJ : 15/11/2022
//*--------------------------------------------------------------------------------------------
//*Programmeurs :	Desenclos Charles							Classe : BTSSN2
//*					Suard Enzo
//*					 
//*--------------------------------------------------------------------------------------------
//*
//* BUT : Permet de récupérer les trames GPS pendant 15 secondes et d'afficher la trame complète et ses parties.
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
	qDebug() << "Le port connecté";

	
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
		
		// on découpe la trame pour juste avoir les valeurs pour la profondeur
		QStringList resDataListProfondeur = regExpProfondeur.capturedTexts();
		QString resDataProfondeur = resDataListProfondeur[0];
		QString profondeur = resDataProfondeur.left(resDataProfondeur.size());
		dataProfondeur = profondeur.split(QLatin1Char(','), Qt::SkipEmptyParts); // fractionne la chaine

		QString Profondeur = dataProfondeur[9]; 

		//Affichage dans le label correspondant au label de profondeur 

		ui.LabelAfficheProfondeur->setText(Profondeur); // Affichage dans l'interface via le nom du label correspondant

		// Température

		// on découpe la trame pour juste avoir les valeurs pour la température
		QStringList resDataListTemperature = regExpTemperature.capturedTexts();
		QString resDataTemperature = resDataListTemperature[0];
		QString temperature = resDataTemperature.left(resDataTemperature.size());
		dataListTemperature = temperature.split(QLatin1Char(','), Qt::SkipEmptyParts); // fractionne la chaine

		//Affichage dans le label correspondant au label de la température

		QString Temperature = dataListTemperature[1];

		ui.LabelAfficheTemperature->setText(Temperature); // Affichage dans l'interface via le nom du label correspondant
	}
	
}


