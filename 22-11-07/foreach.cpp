#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string array[5] = {"Renault", "Peugeot", "Opel", "Hyundai", "Volvo"};

    for (auto marke : array)
        cout << marke << endl;

    return 0;
}
