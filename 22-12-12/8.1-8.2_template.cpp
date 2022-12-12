#include <array>
#include <iostream>

using std::array;
using std::cin;
using std::cout;
using std::endl;

template <typename T, const int DIM = 1000>
struct TArray
{
	std::array<T, DIM> aArray;
    // 8.1: T aArray[DIM];
    inline size_t getMemorySize()
    {
        return DIM * sizeof(T);
    }
    inline size_t getSize()
    {
        return DIM;
    }
};

int main()
{
    TArray<int> aintArray;
    TArray<double> adoblArray;
	int elemente = 0;
	int speicher = 0;

    for (size_t i = 0; i < aintArray.getSize(); i++)
    {
        // 8.1: aintArray.aArray[i] = i;
		aintArray.aArray.at(i) = i;
    }
    for (size_t i = 0; i < aintArray.getSize(); i++)
    {
		if (i % 10 == 0) cout << endl;
        // 8.1: cout << aintArray.aArray[i] << ", ";
		cout << aintArray.aArray.at(i) << ", ";
    }

	// 8.1: elemente = aintArray.getSize();
	// 8.1: speicher = aintArray.getMemorySize();

	elemente = aintArray.aArray.max_size();
	speicher = sizeof(aintArray);

    cout << "\naintArray: \n    Elemente: " << elemente << "\n    Speicher: " << speicher
         << endl;
	
}