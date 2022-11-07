#include <cmath>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    unsigned int n;
    cout << "Anzahl der Vektorelemente: ";
    cin >> n;

    double elements[n];
    vector<double> x(n);

    for (size_t k = 0; k < x.size(); k++)
    {
        x.at(k) = 1.0 / (k + 1.0);
        if (k == 0)
            cout << x.at(k);
        else
            cout << ", " << x.at(k);
    }
    cout << endl;

    double vlange = 0.0;
    for (size_t k = 0; k < x.size(); k++)
    {
        vlange += x[k] * x[k];
    }
    vlange = sqrt(vlange);
    cout << "Die Länge des Vektors beträgt " << vlange << endl;


    return 0;
}
