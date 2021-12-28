#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int i;
	double j, s = 0;
	for (i = 2; ; i += 2)
	{
		cout << "Введите j: ";
		cin >> j;
		if (j != 0)
			s = s + i * j;
		else
			break;
	}
	cout << "Результат: " << s;
}

{
	int n, i, j;
	double t, a, T, f = 0;
	cout << "enter n: ";
	cin >> n;
	cout << "enter t: ";
	cin >> t;
	for (i = 0; i <= n; i++)
	{
		cout << "enter a: ";
		cin >> a;
		T = 1;
		for (j = n - i; j >= 0; j--)
		{
			T = t * t;
		}
		f = f + a * T;
	}
	cout << "f = " << f;
}
