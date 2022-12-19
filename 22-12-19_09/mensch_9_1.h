#pragma once
#include <iostream>
using namespace std;
class Mensch
{
    // Deklaration der private-geschuetzten Felder
private:
    string strVorname;
    string strNachname;
    int iAlter;
    // Deklaration der public-Methoden
public:
    // Standardkonstruktor der Klasse Mensch
    Mensch();
    // Parametrisierter Konstruktor der Klasse Mensch
    Mensch(string, string, int);
    // Destruktor der Klasse Mensch
    ~Mensch();
    // Schreibe fuer jedes private geschuetzte
    // Feld jeweils einen set- und einen get-Prototyp

    // Schreibmethode fuer strVorname
    void setVorname(string newProp)
    {
        strVorname = newProp;
    }

    // Lesemethode fuer strVorname
    string getVorname()
    {
        return strVorname;
    }
    // Schreibmethode fuer strNachname
    void setNachname(string newProp)
    {
        strNachname = newProp;
    }
    // Lesemethode fuer strNachname
    string getNachname()
    {
        return strNachname;
    }
    // Schreibmethode fuer iAlter
    void setAlter(int newProp)
    {
        iAlter = newProp;
    }
    // Lesemethode fuer iAlter
    int getAlter()
    {
        return iAlter;
    }
	
    string toString();
};