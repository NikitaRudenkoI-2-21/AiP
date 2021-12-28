#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int code;
	char ch, x, y;
	cout << "Введите символ: ";
	cin >> ch;
	code = (int)ch;
	cout << "ASCII-код символа: " << code << endl;
	x = char(code - 1);
	y = char(code + 1);
	cout << "Предыдущий символ: " << x << endl << "Следущий символ: " << y;
}

{
	setlocale(LC_ALL, "rus");
	double S, p = 5, a = 4.2, c = 6.2, b = 7;
	S = sqrt(p(p - a)*(p - b)*(p - c));
	cout << "Площадь равна: " << S;
}
