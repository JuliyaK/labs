// Laba 4.1.cpp: главный файл проекта.

#include "stdafx.h"
#include "iostream"
#include "cmath"

using namespace std;

int f(int n, int a) 
{
	int i2;
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (fabs(a) <= 1)
		{
			i2 = i;
		}
		else
		{
			i2 = i*i;
		}
			sum += a / i2;
	}
	return sum;
}

int main() {
	for (int n = 5; n < 9; n++) 
	{
		cout << "\n";
		for (int a = -1; a < 3; a++)
		{
			int fz = f(n, a);
			cout << fz;
		}
	}
	getchar();
	return 0;
}
