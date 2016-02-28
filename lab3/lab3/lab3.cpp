// lab3.cpp: главный файл проекта.
//Вычислить значение трехчлена y = ax^2 + bx +c .

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	int a, b, c, x, x1, x2, D;
	cout << "enter a:\n";
	cin >> a;
	cout << "enter b:\n";
	cin >> b;
	cout <<  "enter c:\n";
	cin >> c;
		D = b * b - 4 * a * c;
		if (D > 0)
		{
			x1 = (-b - sqrt(D)) / (2 * a);
			x2 = (-b + sqrt(D)) / (2 * a);
		}
		if (D = 0)
		{
			x1 = -b / (2 * a);
			x2 = -b / (2 * a);
		}
		if (D < 0)
		{
			cout << "корней нет";
		}
	getchar();
	return 0;
}