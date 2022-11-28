#include "ampel.hpp"
#include <iostream>
#include <string>
#ifndef _AMPEL_H_
#define _AMPEL_H_

using std::cout;
using std::endl;
using std::string;

string rot = "\033[1;31m⬤ \033[0m";
string gelb = "\033[1;33m⬤ \033[0m";
string grün = "\033[1;32m⬤ \033[0m";
string aus = "\033[1;30m⬤ \033[0m";

string oxx = rot + aus + aus;
string oox = rot + gelb + aus;
string xox = aus + gelb + aus;
string xxo = aus + aus + grün;


bool dayMode()
{
    std::cout << "Tag" << std::endl;
	
	cout << xxo << oxx << endl;
	cout << xox << oxx << endl;
	cout << oxx << oxx << endl;
	cout << oxx << oox << endl;
	cout << oxx << xxo << endl;
	cout << oxx << xox << endl;
	cout << oxx << oxx << endl;
	cout << oox << oxx << endl;

    return true;
}


#endif