// Mensch_9_2.cpp : Implementierung der Klasse Mensch
//

#include "mensch_9_2.cpp"
#include <iostream>
#include <sstream>
#include <vector>


using std::cout;
using std::endl;
using std::vector;


int main()
{
    vector<Mensch *> menschleins;

    Mensch noName;
    menschleins.push_back(&noName);

    Mensch first("Adam", "Smith", 25);
    menschleins.push_back(&first);

    Mensch second("Eve", "Meyers", 21);
    menschleins.push_back(&second);

    for (auto menschlein : menschleins)
    {
        cout << menschlein->toString() << "," << endl;
    }

    /*
	Durch die Referenzen mit * bzw. & wird das entsprechende Onjekt nur einmal erzeugt,
	d.h. der Destruktor wird ingesamt nur 3 mal aufgerufen.
	Wenn man statt der Refernz eine Kopie übergibt, wird der Destruktor öfter aufgerufen.
	Das Gleiche passiert dann auch in der ForEach-Schleife.
	*/

    return 0;
}