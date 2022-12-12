#include <iostream>
class A{};

template<class T>
void fkt(T) { std::cout << "#1\n";}
template<class T>
void fkt(T*) { std::cout << "#2\n";}
template<class T>
void g(T* t) { (fkt) (t);}

/*
template<class T>
void fkt(T*) { std:cout << "#3\n"}
*/

int main() {
	A* ptr = nullptr;
	A ref;
	g(ptr);
	fkt(ptr);
	fkt(ref);
}