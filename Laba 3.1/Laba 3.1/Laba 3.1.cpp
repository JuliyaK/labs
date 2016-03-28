// Laba 3.1.cpp: главный файл проекта.

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	int F;
	int x;
	cout << "x = ";
	cin >> x;
	if (x > 0)
	{
		F = x * x * x + 9;
		cout << "F = " << F;
	}
	if (x == 0)
	{
		F = 0;
		cout << "F = " << F;
	}
	if (x < 0)
	{
		F = x * x + 7;
		cout << "F = " << F;
	}
	getchar();
	getchar();
	return 0;
}