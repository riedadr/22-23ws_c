#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int eingabe, zahl, ziffer, revZahl = 0;
    bool palindrom;

    std::cout << "Zahl = ";
    cin >> eingabe;
    zahl = eingabe;

    while (zahl > 0)
    {
        ziffer = zahl % 10;
        revZahl = (revZahl * 10) + ziffer;
        zahl /= 10;
    }

    if (eingabe == revZahl)
        std::cout << eingabe << " ist ein Palindrom!" << std::endl;
    else
        std::cout << eingabe << " ist kein Palindrom!" << std::endl;

    return 0;
}
