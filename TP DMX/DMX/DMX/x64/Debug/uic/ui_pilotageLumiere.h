/********************************************************************************
** Form generated from reading UI file 'pilotageLumiere.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PILOTAGELUMIERE_H
#define UI_PILOTAGELUMIERE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pilotageLumiereClass
{
public:
    QWidget *centralWidget;
    QLabel *labellumiere1;
    QLabel *labellumiere2;
    QLabel *labellumiere3;
    QScrollBar *barlumiere1rouge;
    QScrollBar *barlumiere1vert;
    QScrollBar *barlumiere1bleu;
    QScrollBar *barlumiere2rouge;
    QScrollBar *barlumiere2vert;
    QScrollBar *barlumiere2bleu;
    QScrollBar *barlumiere3rouge;
    QScrollBar *barlumiere3vert;
    QScrollBar *barlumiere3bleu;
    QLabel *labellumiere1rouge;
    QLabel *labellumiere2rouge;
    QLabel *labellumiere3rouge;
    QLabel *labellumiere1vert;
    QLabel *labellumiere2vert;
    QLabel *labellumiere3vert;
    QLabel *labellumiere1bleu;
    QLabel *labellumiere2bleu;
    QLabel *labellumiere3bleu;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *pilotageLumiereClass)
    {
        if (pilotageLumiereClass->objectName().isEmpty())
            pilotageLumiereClass->setObjectName(QString::fromUtf8("pilotageLumiereClass"));
        pilotageLumiereClass->resize(908, 495);
        centralWidget = new QWidget(pilotageLumiereClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        labellumiere1 = new QLabel(centralWidget);
        labellumiere1->setObjectName(QString::fromUtf8("labellumiere1"));
        labellumiere1->setGeometry(QRect(120, 50, 81, 31));
        labellumiere2 = new QLabel(centralWidget);
        labellumiere2->setObjectName(QString::fromUtf8("labellumiere2"));
        labellumiere2->setGeometry(QRect(120, 130, 71, 41));
        labellumiere3 = new QLabel(centralWidget);
        labellumiere3->setObjectName(QString::fromUtf8("labellumiere3"));
        labellumiere3->setGeometry(QRect(120, 290, 81, 41));
        barlumiere1rouge = new QScrollBar(centralWidget);
        barlumiere1rouge->setObjectName(QString::fromUtf8("barlumiere1rouge"));
        barlumiere1rouge->setGeometry(QRect(240, 20, 160, 16));
        barlumiere1rouge->setMaximum(255);
        barlumiere1rouge->setOrientation(Qt::Horizontal);
        barlumiere1vert = new QScrollBar(centralWidget);
        barlumiere1vert->setObjectName(QString::fromUtf8("barlumiere1vert"));
        barlumiere1vert->setGeometry(QRect(240, 60, 160, 16));
        barlumiere1vert->setMaximum(255);
        barlumiere1vert->setOrientation(Qt::Horizontal);
        barlumiere1bleu = new QScrollBar(centralWidget);
        barlumiere1bleu->setObjectName(QString::fromUtf8("barlumiere1bleu"));
        barlumiere1bleu->setGeometry(QRect(240, 100, 160, 16));
        barlumiere1bleu->setMaximum(255);
        barlumiere1bleu->setOrientation(Qt::Horizontal);
        barlumiere2rouge = new QScrollBar(centralWidget);
        barlumiere2rouge->setObjectName(QString::fromUtf8("barlumiere2rouge"));
        barlumiere2rouge->setGeometry(QRect(240, 140, 160, 16));
        barlumiere2rouge->setMaximum(255);
        barlumiere2rouge->setOrientation(Qt::Horizontal);
        barlumiere2vert = new QScrollBar(centralWidget);
        barlumiere2vert->setObjectName(QString::fromUtf8("barlumiere2vert"));
        barlumiere2vert->setGeometry(QRect(240, 180, 160, 16));
        barlumiere2vert->setMaximum(255);
        barlumiere2vert->setOrientation(Qt::Horizontal);
        barlumiere2bleu = new QScrollBar(centralWidget);
        barlumiere2bleu->setObjectName(QString::fromUtf8("barlumiere2bleu"));
        barlumiere2bleu->setGeometry(QRect(240, 220, 160, 16));
        barlumiere2bleu->setMaximum(255);
        barlumiere2bleu->setOrientation(Qt::Horizontal);
        barlumiere3rouge = new QScrollBar(centralWidget);
        barlumiere3rouge->setObjectName(QString::fromUtf8("barlumiere3rouge"));
        barlumiere3rouge->setGeometry(QRect(240, 280, 160, 16));
        barlumiere3rouge->setMaximum(255);
        barlumiere3rouge->setOrientation(Qt::Horizontal);
        barlumiere3vert = new QScrollBar(centralWidget);
        barlumiere3vert->setObjectName(QString::fromUtf8("barlumiere3vert"));
        barlumiere3vert->setGeometry(QRect(240, 320, 160, 16));
        barlumiere3vert->setMaximum(255);
        barlumiere3vert->setOrientation(Qt::Horizontal);
        barlumiere3bleu = new QScrollBar(centralWidget);
        barlumiere3bleu->setObjectName(QString::fromUtf8("barlumiere3bleu"));
        barlumiere3bleu->setGeometry(QRect(240, 360, 160, 16));
        barlumiere3bleu->setMaximum(255);
        barlumiere3bleu->setOrientation(Qt::Horizontal);
        labellumiere1rouge = new QLabel(centralWidget);
        labellumiere1rouge->setObjectName(QString::fromUtf8("labellumiere1rouge"));
        labellumiere1rouge->setGeometry(QRect(180, 30, 47, 13));
        labellumiere2rouge = new QLabel(centralWidget);
        labellumiere2rouge->setObjectName(QString::fromUtf8("labellumiere2rouge"));
        labellumiere2rouge->setGeometry(QRect(180, 140, 47, 13));
        labellumiere3rouge = new QLabel(centralWidget);
        labellumiere3rouge->setObjectName(QString::fromUtf8("labellumiere3rouge"));
        labellumiere3rouge->setGeometry(QRect(180, 280, 47, 13));
        labellumiere1vert = new QLabel(centralWidget);
        labellumiere1vert->setObjectName(QString::fromUtf8("labellumiere1vert"));
        labellumiere1vert->setGeometry(QRect(180, 60, 47, 13));
        labellumiere2vert = new QLabel(centralWidget);
        labellumiere2vert->setObjectName(QString::fromUtf8("labellumiere2vert"));
        labellumiere2vert->setGeometry(QRect(180, 190, 47, 13));
        labellumiere3vert = new QLabel(centralWidget);
        labellumiere3vert->setObjectName(QString::fromUtf8("labellumiere3vert"));
        labellumiere3vert->setGeometry(QRect(180, 320, 47, 13));
        labellumiere1bleu = new QLabel(centralWidget);
        labellumiere1bleu->setObjectName(QString::fromUtf8("labellumiere1bleu"));
        labellumiere1bleu->setGeometry(QRect(180, 100, 47, 13));
        labellumiere2bleu = new QLabel(centralWidget);
        labellumiere2bleu->setObjectName(QString::fromUtf8("labellumiere2bleu"));
        labellumiere2bleu->setGeometry(QRect(170, 220, 47, 13));
        labellumiere3bleu = new QLabel(centralWidget);
        labellumiere3bleu->setObjectName(QString::fromUtf8("labellumiere3bleu"));
        labellumiere3bleu->setGeometry(QRect(170, 360, 47, 13));
        pilotageLumiereClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(pilotageLumiereClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 908, 21));
        pilotageLumiereClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(pilotageLumiereClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        pilotageLumiereClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(pilotageLumiereClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        pilotageLumiereClass->setStatusBar(statusBar);

        retranslateUi(pilotageLumiereClass);

        QMetaObject::connectSlotsByName(pilotageLumiereClass);
    } // setupUi

    void retranslateUi(QMainWindow *pilotageLumiereClass)
    {
        pilotageLumiereClass->setWindowTitle(QCoreApplication::translate("pilotageLumiereClass", "pilotageLumiere", nullptr));
        labellumiere1->setText(QCoreApplication::translate("pilotageLumiereClass", "Lumi\303\250re 1 :", nullptr));
        labellumiere2->setText(QCoreApplication::translate("pilotageLumiereClass", "Lumi\303\250re 2 :", nullptr));
        labellumiere3->setText(QCoreApplication::translate("pilotageLumiereClass", "Lumi\303\250re 3 :", nullptr));
        labellumiere1rouge->setText(QCoreApplication::translate("pilotageLumiereClass", "Rouge :", nullptr));
        labellumiere2rouge->setText(QCoreApplication::translate("pilotageLumiereClass", "Rouge :", nullptr));
        labellumiere3rouge->setText(QCoreApplication::translate("pilotageLumiereClass", "Rouge :", nullptr));
        labellumiere1vert->setText(QCoreApplication::translate("pilotageLumiereClass", "Vert", nullptr));
        labellumiere2vert->setText(QCoreApplication::translate("pilotageLumiereClass", "Vert", nullptr));
        labellumiere3vert->setText(QCoreApplication::translate("pilotageLumiereClass", "Vert", nullptr));
        labellumiere1bleu->setText(QCoreApplication::translate("pilotageLumiereClass", "Bleu", nullptr));
        labellumiere2bleu->setText(QCoreApplication::translate("pilotageLumiereClass", "Bleu", nullptr));
        labellumiere3bleu->setText(QCoreApplication::translate("pilotageLumiereClass", "Bleu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pilotageLumiereClass: public Ui_pilotageLumiereClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PILOTAGELUMIERE_H
