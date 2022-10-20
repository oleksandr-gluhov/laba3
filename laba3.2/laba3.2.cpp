
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double a; // вхідний параметр
	double b; // вхідний параметр
	double c; // вхідний параметр
	double F; // результат обчислення виразу
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// 1 спосіб
	if ((a < 0) && (c!=0))
	{
		F = (a* (x * x)) + (b * x) + c;
	}
	if (a > 0 && c==0)
	{
		F = (-1 * a) / (x - c);
	}
	if (!(a < 0 && c!=0) && !( a<0 && c==0))
	{
		F = a* (x + c);
	}
	cout << "1) F = " << F << endl;

	// 2 спосіб
	if (a < 0 && c != 0)
	{
		F = (a * (x * x)) + (b * x) + c;
	}
	else
	{
		if (a > 0 && c == 0)
		{
			F = (-1 * a) / (x - c);
		}
		else
		{
			F = (a * (x * x)) + (b * x) + c;
		}
	}
	cout << "2) F = " << F << endl;
	return 0;
}
	
