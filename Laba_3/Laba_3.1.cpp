#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x; // ������� ��������
    double y; // ��������� ���������� ������
    double A; // �������� ��������� - ������������� ����� ������� ������
    double B; // �������� ��������� - ������������� ����� ������� ������
    double C; // �������� ��������� - ������������� ����� ������� ������
    cout << "x = "; cin >> x;
    // 1 �����
    A = 2 / x;
    B = abs(x);
    if (x < 0)
    {
        C = 1 + 4 * (x * x);
    }
    if (0 <= x && x <= 2)
    {
        C = (exp(x)+ abs(x)) * (exp(x) + abs(x));
    }
    if (2 < x)
    {
        C = 5*sin((x*x)+1);
    }
    y = A + B + C;

    cout << "1) y = " << y << endl;
    // 2 c����
    if (x < 0)
    {
        C = 1 + 4 * (x * x);
    }
    else
    {
        if (2 < x)
        {
            C = 5 * sin((x * x) + 1);
        }
        else
        {
            C = (exp(x) + abs(x)) * (exp(x) + abs(x));
        }
    }
    y = A + B + C;

    cout << "2) y = " << y << endl;
}
