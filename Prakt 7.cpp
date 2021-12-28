#include <iostream>
using namespace std;

void main()
//int main()
{
	setlocale(0, "");
	double num;
	cout << "Введите произвольное число: ";
	cin >> num;
	if (num < 10)
		cout << "Это число меньше 10";
	else if (num == 10)
		cout << "Это число равно 10";
	else
		cout << "Это число больше 10";
}

{
	setlocale(0, "");
	double x, y;
	cout << "Введите значения координат: " << endl;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	if ((x >= 0 && x <= 1 && y >= -1 && y <= 0) or (x >= -1 && x <= 0 && y <= 1 && y >= 0))
		cout << "Точка принадлежит нашей области" << endl;
	else
		cout << "Точка не принадлежит нашей области" << endl;
}

{
	setlocale(0, "");
	char sign;
	double num1, num2, result;

	cout << "Введите первое число: ";
	cin >> num1;
	cout << "Введите действие: ";
	cin >> sign;
	if (sign != '*' and sign != '/' and sign != '+' and sign != '-')
		cout << "Вы ввели некотретный знак действия!" << endl;
	else
		cout << "Введите второе число: "
		cin >> num2;
		cout << endl;
		switch (sign)
		{
				case '+':
						{
							result = num1 + num2;
							cout << num1 << " + " << num2 << " = ";
							break;
						}
				case '-':
						{
							result = num1 - num2;
							cout << num1 << "  " << num2 << " = ";
							break;
						}
				case '*':
						{
							result = num1 * num2;
							cout << num1 << " * " << num2 << " = ";
							break;
						}
				case '/':
						{
							result = num1 / num2;
							cout << num1 << " / " << num2 << " = ";
							break;
						}
		}
		if (num2 == 0 and sign == '/')
			cout << "Делить на ноль нельзя!" << endl;
		else
			cout << result << endl;
}