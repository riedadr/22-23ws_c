// Mensch_9_2.cpp : Implementierung der Klasse Mensch
//

#include "mensch_9_1.h"
#include <iostream>
#include <sstream>

using std::cout;
using std::endl;
//Standardkonstruktor der Klasse Mensch
Mensch::Mensch()
{
    cout << "Standardkonstruktor der Klasse Mensch" << endl;
    iAlter = 0;
    strVorname = "";
    strNachname = "";
}

// Parametrisierter Konstruktor der Klasse Mensch
Mensch::Mensch(string vn, string nn, int a)
{
    this->setVorname(vn); // this optional
    setNachname(nn);
    iAlter = a;
}
// Destruktor der Klasse Mensch eigentlich nicht erforderlich!
Mensch::~Mensch()
{
    cout << "Destruktor der Klasse Mensch";
}
// Schreibmethode fuer strVorname
void Mensch::setVorname(string s)
{
    strVorname = s;
}
// Lesemethode fuer strVorname
string Mensch::getVorname()
{
    return strVorname;
}

// Schreibmethode fuer strNachname
void Mensch::setNachname(string s)
{
    strNachname = s;
}

// Lesemethode fuer strNachname
string Mensch::getNachname()
{
    return strNachname;
}

// Schreibmethode fuer iAlter
void Mensch::setAlter(int i)
{
    iAlter = i;
}

// Lesemethode fuer iAlter
int Mensch::getAlter()
{
    return iAlter;
}

// Gibt das aktuelle Objekt als Default-String aus
string Mensch::toString()
{
    stringstream ss;
    ss << getVorname() << " " << getNachname() << " ist " << getAlter() << " Jahre alt";
    return ss.str();
}