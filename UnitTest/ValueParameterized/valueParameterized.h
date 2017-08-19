#include <iostream>
using namespace std;


template<class T>
void printValue(T value)
{
	std::cout <<value << std::endl;
}

template <class L, class K>
void printV(L value, K value1)
{
	std::cout << value << ' ' << value1 << std::endl;
}