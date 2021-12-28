#include<iostream> 
using namespace std; 

void main()
{
	char st[6], ch;
	cout << "Type characters and press Enter: ";
	cin >> st;
	ch = st[0];
	st[0] = st[4];
	st[4] = ch;
	cout << "The result is: " << st;
}

{
	int x, y;
	char znak;
	cout << "Enter first and second numbers: ";
	cin >> x >> y;
	cout << "Enter deystvie: ";
	cin >> znak;
	if (znak == '+')
		cout << "Summ x and y = " << x + y;
	if (znak == '-')
		cout << "Raznost x and y = " << x - y;
}

