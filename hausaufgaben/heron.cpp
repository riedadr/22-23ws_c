#include <iostream>

using std::cin;
using std::cout;
using std::endl;

float recHeron(double, float, int, int);

int main()
{
    float eingabe = 0.0F;
    float näherung = 0.0F;
    double ergebnis = -1.0F;
	int maxRuns = 10;

    cout << "Wurzel von: ";
    cin >> eingabe;

    if (eingabe < näherung)
    {
        cout << "Eingabe ungültig!" << endl;
        return 0;
    }

    // iterative Suche nach erstem Näherungswert
    while (näherung * näherung < eingabe)
    {
        näherung++;
    }

    if ((näherung * näherung) == eingabe)
        ergebnis = näherung;
    else {
		cout << "Anzahl der Durchläufe (10): ";
		cin >> maxRuns;
        ergebnis = recHeron(näherung - 1, eingabe, 0, maxRuns);
	}

    cout << "√" << eingabe << " = ";
    cout.precision(11);
    cout << ergebnis << endl;

	return 0;
}

float recHeron(double a, float zahl, int count, int maxRuns)
{
    if (count < maxRuns)
    {
		if (a == 0) return -1;
		
        float b = zahl / a;
		cout << b << " < √" << zahl << " < " << a << endl;
        a = (a + b) / 2;
        recHeron(a, zahl, ++count, maxRuns);
    }
    else
        return a;
}