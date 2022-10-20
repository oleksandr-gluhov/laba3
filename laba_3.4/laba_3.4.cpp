// Lab_03_4.cpp
// < прізвище, ім’я автора >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.1
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр  
	double y_n;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	if ( ( (-1*R<=x&&x<=0) && ((-1 * R <= y && y <= 0))))
	{
		cout << "Yes";
	}
	if ((-1 * R <= x && x <= 0)&& y>0 && y <-1 * sqrt((x*x)-2*x*R)+R)
	{
		cout << "Yes";
	}
	if (((0 <= x && x <= R) && ((0 <= y && y <= R))))
	{
		cout << "Yes";
	}
	if ((0 <= x && x <= R) && y < 0 && y < sqrt((x * x) - 2 * x * R) + R)
	{
		cout << "Yes";
	}
	else {
		cout << "no";
	}
}
