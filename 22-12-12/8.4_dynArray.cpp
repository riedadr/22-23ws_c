#include <array>
#include <iostream>

using std::array;
using std::cin;
using std::cout;
using std::endl;

template <typename T, const int DIM = 1000000>
struct TArray
{
	T* aptr = new T[DIM];
	long elements = DIM;
	inline void freeMemory() {
		delete[] aptr;		// [] um den gesamten Bereich zu löschen
		aptr = nullptr;
		elements = 0;
	}
    inline size_t getMemorySize()
    {
        return elements * sizeof(T);
    }
    inline size_t getSize()
    {
        return DIM;
    }
	inline bool isAllocated() {
		if (aptr != nullptr) return true;
	}
};

int main()
{
    TArray<int> aintArray;
	int elemente = 0;
	int speicher = 0;

	if (aintArray.isAllocated()) cout << "Speicher: " << aintArray.getMemorySize() << endl;
	else {
		cout << "Problem bei der Allokierung!" << endl;
		return 1;
	}

    for (size_t i = 0; i < aintArray.getSize(); i++)
    {
		// Code wird auf Github hochgeladen
    }
    for (size_t i = 0; i < aintArray.getSize(); i++)
    {
		if (i % 10 == 0) cout << endl;
		if (i % 1000 == 0) cout << "?" << ", ";
    }

	elemente = aintArray.getSize();
	speicher = aintArray.getMemorySize();

    cout << "\naintArray: \n    Elemente: " << elemente << "\n    Speicher: " << speicher
         << endl;
	
}