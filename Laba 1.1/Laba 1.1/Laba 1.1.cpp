// Laba 1.1.cpp: главный файл проекта.

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	int a, b, c, x;
	int D;
	double x1, x2;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	D = b * b + 4 * a * c;
	if (D > 0)
	{
		x1 = ((-b + sqrt(D)) / (2 * a));
		x2 = ((-b - sqrt(D)) / (2 * a));
		cout << x1 << x2 << endl;
	}
	if (D == 0)
	{
		x1 = ((-b) / (2 * a));
		cout << x1 << endl;
	}
	if (D < 0)
	{
		cout << "resheni net" << endl;
	}
	getchar();
	return 0;
}
