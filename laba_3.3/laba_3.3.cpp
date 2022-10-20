// Lab_03_3.cpp
// < прізвище, ім’я автора >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 0.1
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if ((x <= (-7 - R)) || (((-7 + R) <= x) && (x <= (-4))))
	{
		y = R;
	}
	if ((-7 - R < x) && (x < -4))
	{
		y = ( - 1 * sqrt((R * R) - (x * x) - (14 * x) - 49)) + R;
	}
	if ((-4 < x) && (x < 0))
	{
		y = (-1 * (R / 4)) * x;
	}
	if ((0<=x) && x<= (M_PI))
	{
		y = sin(x);
	}
	if (M_PI < x)
	{
		y = x - M_PI;
	}
	cout << "y = " << y << endl;
}
