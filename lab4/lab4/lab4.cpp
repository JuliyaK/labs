// lab4.cpp: главный файл проекта.
// Вычислить значение ф-ии.

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	int x;
	double f;
	cout << "enter x: \n";
	cin >> x;
	if (x > 0)
	{
		f = x * x + 7;
	}
	if (x = 0)
	{
		f = 0;
	}
	if(x < 0)
	{
		f = x * x * x + 9;
	}
	cout << f << endl;
	getchar();
	getchar();
	return 0;
}