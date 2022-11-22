#include "pilotageLumiere.h"
#include "ui_pilotageLumiere.h"

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
    valeur.barlumiere1rouge; // récupère la valeur du curseur rouge pour la lumière 
    dmxBlock[0] = valeur;    // mets la valeur pour l'adresse 0
    SendTrame();             // appele de la méthode SenTrame() pour envoyer la trame
}

void pilotageLumiere::lumiere1vert(int valeur)
{
    valeur.barlumiere1vert; // récupère la valeur du curseur vert pour la lumière 
    dmxBlock[1] = valeur;   // mets la valeur pour l'adresse 1
    SendTrame();            // appele de la méthode SenTrame() pour envoyer la trame
}

void pilotageLumiere::lumiere1bleu(int valeur)
{
    valeur.barlumiere1bleu;   // récupère la valeur du curseur bleu pour la lumière 
    dmxBlock[2] = valeur;     // mets la valeur pour l'adresse 2
    SendTrame();              // appele de la méthode SenTrame() pour envoyer la trame
    
}

   void pilotageLumiere::lumiere2rouge(int valeur)
{
    valeur.barlumiere2rouge;  // récupère la valeur du curseur rouge pour la lumière 
    dmxBlock[10] = valeur;    // mets la valeur pour l'adresse 10
    SendTrame();              // appele de la méthode SenTrame() pour envoyer la trame
}
   
void pilotageLumiere::lumiere2vert(int valeur)
{
    valeur.barlumiere2vert;  // récupère la valeur du curseur vert pour la lumière 
    dmxBlock[11] = valeur;   // mets la valeur pour l'adresse 11
    SendTrame();             // appele de la méthode SenTrame() pour envoyer la trame
}
    
void pilotageLumiere::lumiere2bleu(int valeur)
{
    valeur.barlumiere2bleu;  // récupère la valeur du curseur bleu pour la lumière 
    dmxBlock[12] = valeur;   // mets la valeur pour l'adresse 12
    SendTrame();             // appele de la méthode SenTrame() pour envoyer la trame
}
void pilotageLumiere::lumiere3rouge(int valeur)
{
    valeur.barlumiere3rouge;   // récupère la valeur du curseur rouge pour la lumière 
    dmxBlock[20] = valeur;     // mets la valeur pour l'adresse 20
    SendTrame();               // appele de la méthode SenTrame() pour envoyer la trame

}
void pilotageLumiere::lumiere3vert(int valeur)
{
    valeur.barlumiere3vert;  // récupère la valeur du curseur vert pour la lumière 
    dmxBlock[21] = valeur;   // mets la valeur pour l'adresse 21
    SendTrame();             // appele de la méthode SenTrame() pour envoyer la trame
}

void pilotageLumiere::lumiere3bleu(int valeur)
{
    valeur.barlumiere3bleu;  // récupère la valeur du curseur bleu pour la lumière 
    dmxBlock[22] = valeur;   // mets la valeur pour l'adresse 22
    SendTrame();             // appele de la méthode SenTrame() pour envoyer la trame
}



