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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
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
    QTextBrowser *textlumiere1;
    QTextBrowser *textlumiere2;
    QTextBrowser *textlumiere3;
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
        labellumiere3->setGeometry(QRect(130, 230, 81, 41));
        textlumiere1 = new QTextBrowser(centralWidget);
        textlumiere1->setObjectName(QString::fromUtf8("textlumiere1"));
        textlumiere1->setGeometry(QRect(220, 20, 251, 81));
        textlumiere2 = new QTextBrowser(centralWidget);
        textlumiere2->setObjectName(QString::fromUtf8("textlumiere2"));
        textlumiere2->setGeometry(QRect(220, 120, 251, 81));
        textlumiere3 = new QTextBrowser(centralWidget);
        textlumiere3->setObjectName(QString::fromUtf8("textlumiere3"));
        textlumiere3->setGeometry(QRect(220, 220, 251, 81));
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
    } // retranslateUi

};

namespace Ui {
    class pilotageLumiereClass: public Ui_pilotageLumiereClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PILOTAGELUMIERE_H
