// Prakt 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double x, num1, num2;
	cout << "Введите первое число: ";
	cin >> num1;
	cout << "Введите второе число: ";
	cin >> num2;
	x = (-num1 + sqrt(num1*num1 + 3 * num2)) / (2 * num2);
	cout << "Первый пример равен: " << x << endl;
	x = sqrt((3 + num1 * num2) / (4 * num1*num1));
	cout << "Второй пример равен: " << x <<"\n";
	x = (6 - abs(num1 - 3 * num2)) / sqrt(5 - num2 * num2);
	cout << "Третий пример равен: " << x << endl;
	x = exp(num1 + 7)*sqrt(37 * num2 - num1 * num1*num1);
	cout << "Четвёртый пример равен: " << x <<"\n";
	x = sin(num1) + (num2*num2) / (cos(2 * num1) + 23);
	cout << "Пятый пример равен: " << x << endl;
	x = tan(num2) - abs(num1 - 3 * num2 + 2 / sqrt(num2 + 4));
	cout << "Шестой пример равен: " << x <<"\n\n";
	cout << "Нажмите на enter, чтобы закрыть программу" << endl;
}

{
	setlocale(LC_ALL, "rus")
	char ch[6], x;
	cout << "Введите строку: ";
	cin >> ch;
	x = ch[0];
	ch[0] = ch[4];
	ch[4] = ch[2];
	ch[2] = x;
	cout << "Результат: " << ch << endl;
}

{
	setlocale(LC_ALL, "rus");
	string x = "abc", y = "def";
	cout << "Результат сложения двух строк: " << x + y;
}
