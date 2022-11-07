#include <iostream>

using std::cin;
using std::cout;
using std::endl;

//log of 2
int main()
{
    float input;
    float value;
    float result;

    std::cout << "Zahl: ";
    cin >> input;

    value = input;
    result = -1;

    while (value >= 1)
    {
        // std::cout << "value = " << value << "; result = " << result << endl;
        result++;
        value = value / 2;
    }

    std::cout << "lb(" << input << ") = " << result << endl;

    return 0;
}
