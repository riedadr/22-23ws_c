#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int daSchwimmtNochWas(bool arr[5][5])
{
    int übrig = 0;

    for (int zeile = 0; zeile < 5; zeile++)
    {
        for (int spalte = 0; spalte < 5; spalte++)
        {
            if (arr[zeile][spalte] == 1)
                übrig++;
        }
    }

    return übrig;
}

int main()
{
    int zeile, spalte, versuche = 0;
    bool boote[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
    };

    int anzahlBoote = daSchwimmtNochWas(boote);

    while (anzahlBoote > 0)
    {
        versuche++;
        std::cout << "X-Koordinate (0 - 5)";
        cin >> spalte;
        std::cout << "Y-Koordinate (0 - 5)";
        cin >> zeile;

        if (boote[zeile][spalte] == 1)
        {
            std::cout << "Boom!" << std::endl;
            anzahlBoote--;
            boote[zeile][spalte] = 0;
        }
        else
            std::cout << "kein Boom!" << std::endl;
    }

    std::cout << "Da schwimmt nix mehr! \nRaketen verschossen: " << versuche << std::endl;
    return 0;
}
