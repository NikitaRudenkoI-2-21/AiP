#include<iostream>                                                      
using namespace std;
void main()
{
	short x = 65530, y = 10;
	x = x + y;
	cout << x << " + " << y << " = " << x + y << endl;
	cout << "Size of double" << sizeof(double) << " bytes" << "\n";
	cout << "Size of int" << sizeof(int) << " bytes" << "\n";
	cout << "Size of float" << sizeof(float) << " bytes" << "\n";
	cout << "Size of char" << sizeof(char) << " bytes" << "\n";
	cout << "Size of short" << sizeof(short) << " bytes" << "\n";
}
