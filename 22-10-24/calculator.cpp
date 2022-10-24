#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    char op;
    float zahl1, zahl2;
    long double erg;

    std::cout << "Operation (+): ";
    cin >> op;
    std::cout << "1. Zahl      = ";
    cin >> zahl1;
    std::cout << "2. Zahl      = ";
    cin >> zahl2;

    switch (op)
    {
    case '+':
        erg = zahl1 + zahl2;
        break;
    case '-':
        erg = zahl1 - zahl2;
        break;
    case '*':
        erg = zahl1 * zahl2;
        break;
    case '/':
        erg = zahl1 / zahl2;
        break;
    default:
        std::cout << "Operand falsch, Depp: " << op << std::endl;
        op = '+';
        erg = zahl1 + zahl2;
        break;
    }

    std::cout << "\n" << zahl1 << " " << op << " " << zahl2 << " = " << erg << std::endl;

    return 0;
}
