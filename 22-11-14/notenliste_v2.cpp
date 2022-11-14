// Notenliste.cc : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
// Author : Stefan Mueller
// Date of Construction:30.09.2022
// History: Checked in at 08.11.2022

#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::vector;

// Prototypen: Funktionen können vorher definiert und später implementiert werden,
// sonst müssten die Funktionen hier vollständig ausgeschrieben werden, um sie in main() verwenden zu können
inline void clearScreen(bool);
void neuerEintrag(vector<string> &, vector<float> &);
void letztesLöschen(vector<string> &, vector<float> &);
void alleAnzeigen(vector<string> &, vector<float> &, int);

int main()
{
    // Deklaration zweier leerer Vectoren
    vector<string> vectofNames;
    vector<float> vectofDegrees;

    // Deklaration und Initialisierung der Variablen
    string strName;
    float fDegree = 5.0F;
    char cInput = ' ';
    int cntEntries = 0;

    do
    {
        cInput = 0;
        cout << endl << endl;
        cout << "\'n\' = Namen und Note eingeben" << endl;
        cout << "\'l\' = letzten Eintrag loeschen" << endl;
        cout << "\'a\' = Alle Anzeigen" << endl;
        cout << "Geben Sie zum Beenden des Programms \'0\' ein!\n\n";
        cout << "Bitte waehlen Sie eine Option aus: ";
        cin >> cInput;
        cin.ignore(100, '\n'); // faengt zu lange Eingaben ab!

        if (cInput == 'n')
        {
            neuerEintrag(vectofNames, vectofDegrees);
            cntEntries++;
            clearScreen(false); // Bildschirmanzeige loeschen Tip Windows/IX CLS/clear
        }
        else if (cInput == 'l')
        {
            letztesLöschen(vectofNames, vectofDegrees);
            cntEntries--;
            clearScreen(true); // Bildschirmanzeige loeschen
        }
        else if (cInput == 'a')
        {
            alleAnzeigen(vectofNames, vectofDegrees, cntEntries);
            clearScreen(true); // Bildschirmanzeige loeschen
        }
        else
            continue;
    } while (cInput != '0');
    cout << "\n\nProgrammende!\n";
}

inline void clearScreen(bool wait)
{
    if (wait)
        int ch = getchar();
    system("clear");
}

void neuerEintrag(vector<string> &vectofNames, vector<float> &vectofDegrees)
{
    string strName = "";
    float fDegree = 5.0f;

    cout << "Namen eingeben: ";
    //cin >> strName;        //1 Was kann hier passieren?
    getline(cin, strName); //3 jetzt passt es!
    vectofNames.push_back(strName);
    //2 cin.ignore(500, '\n'); //2 Schafft Abhilfe aber immer noch nicht ideal!

    cout << "\nNote eingeben: ";
    cin >> fDegree;
    vectofDegrees.push_back(fDegree);
}

void letztesLöschen(vector<string> &vectofNames, vector<float> &vectofDegrees)
{
    int indexOfLast = vectofNames.size() - 1;
    string strName = vectofNames.at(indexOfLast);
    float fDegree = vectofDegrees.at(indexOfLast);

    cout << strName << " mit der Note " << fDegree << " wird geloescht!" << endl;
    vectofNames.pop_back();
    vectofDegrees.pop_back();
}

void alleAnzeigen(vector<string> &vectofNames, vector<float> &vectofDegrees, int cntEntries)
{
    int i = 0;
    for (string name : vectofNames)
    {
        cout << "\nName: " << name << " hat die Note: " << vectofDegrees.at(i++);
    }
    cout << "\n" << cntEntries << " Einträge abgerufen";
}
