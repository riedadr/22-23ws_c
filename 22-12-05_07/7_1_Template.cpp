// 7_1_Template.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//


#include <array>
#include <iostream>
using std::array;
using std::cin;
using std::cout;

int *find(int *array, int n, int x)
{
    int *p = &array[0]; // lokale Kopie auf Anfang setzen
    for (int i = 0; i < n; i++)
    {
        if (*p == x)
            return array; // gefunden ==> Pointer zurueckgeben
        p++;
    }
    return nullptr; // nicht gefunden Null-Pointer zurueckgeben
}
int main()
{
    const int DIM = 10;
    int iSearch;
    int iFound = -1;
    //int *iptr = &iFound;
    array<int, DIM> iArray{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // TODO

    do
    {
        int *iptr = &iArray[0];
        cout << "\nGeben Sie einen positiven Suchwert ein: ";
        cin >> iSearch;

        iptr = find(iptr, DIM, iSearch);
        if (iptr == nullptr)
        {
            cout << "\nnicht gefunden!";
            break; //verlässt Schleife
        }
        else
            cout << "\n" << *iptr << " gefunden!";

    } while (true);


    cout << " ==>Programmende\n";
    return 0;
}