#include "stdafx.h"
#include "iostream"
#include "math.h"
#include "windows.h"

using namespace std;

double f(int a, int n)
{
	double rezult = 0;
	int i;
	for (i = 1; i < n; i++)
	{
		if (abs(a) <= 1)
		{
			rezult += ((double)a) / i;
		}

		else
		{
			rezult += ((double)a) / i*i;
		}
	}

	return rezult;
}

int main()
{
	int a, n;
	cout << "Enter a,n\n";
	cin >> a, n;
	for (n = 5; n <= 8; n++)
	{
		for (a = -1; a <= 2; a++)
		{
			cout << "rezult a= n= \n", a, n, f(a, n);
		}
	}
	getchar();
	getchar();
	return 0;
}
