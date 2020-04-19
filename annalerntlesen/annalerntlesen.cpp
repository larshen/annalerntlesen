// annalerntlesen.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

using namespace std;

int worte_an_tag_x(const int& tag);
int tag_bei_worte(const int& searchworte);

int main()
{
    int tage = 16;
    int worte = 4;
    cout << "Es werden von Anna " << worte_an_tag_x(tage) << " Worte gelesen an Tag " << tage << "." << endl;
    cout << "Es dauert " << tag_bei_worte(worte) << " Tage bis Anna " << worte << " Woerter liest" << endl;
}

int worte_an_tag_x(const int& tag)
{
    int worte = 1;
    for (int i = 1, j = 0; i < tag; i++)
    {
        j++;
        if (j == worte)
        {
            worte++;
            j = 0;
        }
    }
    return worte;
}

int tag_bei_worte(const int& searchworte)
{
    int worte = 1;
    int i = 1, j = 0;
    for (i = 1, j = 0; worte < searchworte; i++)
    {
        j++;
        if (j == worte)
        {
            worte++;
            j = 0;
        }
    }
    return i;
}
// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
