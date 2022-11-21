#include <iostream>

using std::cout;
using std::endl;


int main() {
	for (int i = 31; i < 256; i++) {

		if (i < 10) cout << "ASCII   ";
		if (i < 100) cout << "ASCII  ";
		if (i >= 100) cout << "ASCII ";

		cout << i << " = " << char(i) << " | ";

		if (i%10 == 0) cout << endl;
	}

	return 0;
}