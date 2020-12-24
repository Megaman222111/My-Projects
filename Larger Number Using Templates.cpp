#include <iostream>
using namespace std;

template <class T>
T LargerNumber(T a, T b)
{
	return (a > b) ? a : b;
}

int main()
{
	int i1, i2;
	float f1, f2;

	cout << "Enter two integers: ";
	cin >> i1 >> i2;
	cout << LargerNumber(i1, i2) <<" is larger.";

	cout << "\nEnter two floating-point numbers: ";
	cin >> f1 >> f2;
	cout << LargerNumber(f1, f2) <<" is larger.";

	return 0;
}
