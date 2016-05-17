// Laba 6.cpp: главный файл проекта.

#include "stdafx.h"
#include "iostream"
#include "cmath"

using namespace std;

long double fact(int n)
{
	long fact;
	if ((n == 0) || (n == 1))
		fact = 1;
	else
		for (int i = 1; i <= n; i++)
			fact *= i;
	return fact;
}

int main()
{
	long fact;
	double a, x, k;
	double sum = 0;
	cout << "Enter a = " << a << endl;
	cin >> a;
	for (x = 0; x <= 10; x++)
	{
		cout << pow(a, x) = sum(pow((x* log(a)), k)) / long double (fact (k));
	}
}
