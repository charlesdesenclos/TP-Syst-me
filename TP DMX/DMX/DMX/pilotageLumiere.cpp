#include "pilotageLumiere.h"

pilotageLumiere::pilotageLumiere(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);


    g_dasusbdll = LoadLibrary(L"DasHard2006.dll");

    if (g_dasusbdll)
        DasUsbCommand = (DASHARDCOMMAND)::GetProcAddress((HMODULE)g_dasusbdll, "DasUsbCommand");
    interface_open = DasUsbCommand(DHC_INIT, 0, NULL);
    interface_open = DasUsbCommand(DHC_OPEN, 0, 0);




}

pilotageLumiere::~pilotageLumiere()
{
}


void __fastcall pilotageLumiere::SendTrame() {
    if (interface_open > 0)
    {
        try {
            DasUsbCommand(DHC_DMXOUT, DMX_MAXCHANNEL, dmxBlock);
        }
        catch (int x)
        {
        }
    }
}

void pilotageLumiere::lumiere1rouge(int valeur)
{
    dmxBlock[0] = valeur;
    SendTrame();
}

void pilotageLumiere::lumiere1vert(int valeur)
{
    dmxBlock[1] = valeur;
    SendTrame();    
}

void pilotageLumiere::lumiere1bleu(int valeur)
{
    dmxBlock[2] = valeur;
    SendTrame();
    
}

   void pilotageLumiere::lumiere2rouge(int valeur)
{
    dmxBlock[10] = valeur;
    SendTrame();
}
   
void pilotageLumiere::lumiere2vert(int valeur)
{
    dmxBlock[11] = valeur;
    SendTrame();
}
    
void pilotageLumiere::lumiere2bleu(int valeur)
{
    dmxBlock[12] = valeur;
    SendTrame();
}
void pilotageLumiere::lumiere3rouge(int valeur)
{
    dmxBlock[20] = valeur;
    SendTrame();

}
void pilotageLumiere::lumiere3vert(int valeur)
{
    dmxBlock[21] = valeur;
    SendTrame();
}

void pilotageLumiere::lumiere3bleu(int valeur)
{
    dmxBlock[22] = valeur;
    SendTrame();
}



