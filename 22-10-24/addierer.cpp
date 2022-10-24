#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int summand1, summand2;

    std::cout << "1. Summand = ";
    cin >> summand1;
    std::cout << "2. Summand = ";
    cin >> summand2;

    std::cout << "\n" << summand1 << " + " << summand2 << " = " << summand1 + summand2 << std::endl;
    return 0;
}
