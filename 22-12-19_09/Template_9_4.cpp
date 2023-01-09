// Ausgabe.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using std::cout;
using std::ostream;
class Basis
{
private:
    int acht_ = 8;

public:
    int wert() const
    {
        return acht_;
    }
    void print(ostream &os) const
    {
        os << wert() << "\n";
    }
};

class Print : public Basis
{
private:
    int neun_ = 9;

public:
    void print(ostream &os) const
    {
        os << wert() << "\n";
    }
};

class Wert : public Basis
{
private:
    int zehn_ = 10;

public:
    int wert() const
    {
        return zehn_;
    }
};

class Beides : public Basis
{
private:
    int elf_ = 11;

public:
    int wert() const
    {
        return elf_;
    }
    void print(ostream &os) const
    {
        os << wert() << "\n";
    }
};

int main()
{
    Basis basis{};
    basis.print(cout); // Basisaufruf
    // 8: wie in print() und wert() definiert
    Print print{};
    print.print(cout); // ueberschrieben
    // 8: Print enthält keine eigene wert()-Funktion und ruft die von Basis auf
    Wert wert{};
    wert.print(cout); // noch nicht Bekanntes
    // 8: Wert enthält keine eigene print()-Funktion und ruft die von Basis auf
    Beides print_und_wert{};
    print_und_wert.print(cout); // alles ueberschrieben
    // 11: enthält print() und wert(); funktioniert wie erwartet
}