#include "stdafx.h"
#include "iostream"
#include "cmath"

using namespace std;

int f(int a, int n)
{
	int sum = 0;
	int i;
	for (i = 1; i < n; i++)
	{
		if (fabs(a) <= 1)
		{
			sum += (a) / i;
		}

		else
		{
			sum += (a) / i*i;
		}
	}

	return sum;
}

int main()
{
	int a, n;
	cout << "Enter a= \n";
	cin >> a;
	cout << "Enter n= \n";
	cin >> n;
	for (n = 5; n <= 8; n++)
	{
		for (a = -1; a <= 2; a++)
		{
			cout << "\n\rf(a,n) = " << f(a, n);
		}
	}
	getchar();
	getchar();
	return 0;
}
