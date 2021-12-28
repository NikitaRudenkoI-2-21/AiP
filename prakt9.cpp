#include<iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	char ch;
	int c=0;
	cout << "Введите символы: ";
	do
	{
		cin >> ch;
		if (ch != '.')
		{
			c += 1;
			cout << ch << " = " << (int)ch << endl;
		}
	} while (ch != '.');
	cout << "finish" <<endl<< "Кол-во символов: " << c;
}

{
	setlocale(0, "");
	int val, s=0;
	cout << "Введите последовательность чисел: " << endl;
	while (s <= 100)
	{
		cin >> val;
		s = s + val * val;
	}
	cout << "\nКонечный результат: " << s;
}

{
	setlocale(0, "");
	int x = 0, s = 0, k = 1;
	cout << "Введите последовательность чисел: \n";
	while (true)
	{
		cin >> x;
		if (x != 0)
		{
			if (x > 10 && x < 25)
				s += x;
			if (x > 25)
				k *= x;
		}
		else
			break;
	}
	if (s<k)
		cout<<s;
	else
		cout<<k;
}

{
	setlocale(0, "");
	int i, j;
	for (i = 5; i > 0; i -= 1)
	{
		for (j=0; j<i; j += 1)
			cout << i;
		cout << endl;
	}
}

{
	setlocale(0, "");
	int ch, m, s, f;
	cout << "Введите время в формате Час:Минута:Секунда : ";
	cout << endl;
	cin >> ch>>m>>s;
	f = ((ch * 60) * 60) + (m * 60) + s;
	cout << f;
}