/********************************************************************************
** Form generated from reading UI file 'DMX.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DMX_H
#define UI_DMX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DMXClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DMXClass)
    {
        if (DMXClass->objectName().isEmpty())
            DMXClass->setObjectName(QString::fromUtf8("DMXClass"));
        DMXClass->resize(600, 400);
        menuBar = new QMenuBar(DMXClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        DMXClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DMXClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        DMXClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(DMXClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        DMXClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(DMXClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DMXClass->setStatusBar(statusBar);

        retranslateUi(DMXClass);

        QMetaObject::connectSlotsByName(DMXClass);
    } // setupUi

    void retranslateUi(QMainWindow *DMXClass)
    {
        DMXClass->setWindowTitle(QCoreApplication::translate("DMXClass", "DMX", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DMXClass: public Ui_DMXClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DMX_H
