#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_pilotageLumiere.h"
#include "DasHard.h"
#include "libloaderapi.h"

#define DMX_MAXCHANNEL 512


class pilotageLumiere : public QMainWindow
{
    Q_OBJECT
        HINSTANCE g_dasusbdll;

public:
    pilotageLumiere(QWidget *parent = nullptr);
    ~pilotageLumiere();
    typedef int (*DASHARDCOMMAND)(int, int, unsigned char*);
    DASHARDCOMMAND DasUsbCommand;
    int interface_open;
    unsigned char dmxBlock[512];

    void __fastcall SendTrame();

private:
    Ui::pilotageLumiereClass ui;

public slots:
    void lumiere1rouge(int valeur);
    void lumiere1vert(int valeur);
    void lumiere1bleu(int valeur);
    void lumiere2rouge(int valeur);
    void lumiere2bleu(int valeur);
    void lumiere2vert(int valeur);
    void lumiere3rouge(int valeur);
    void lumiere3bleu(int valeur);
    void lumiere3vert(int valeur);
};
