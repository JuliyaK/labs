// Вычислить сумму четных элементов 

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	int i, n, sum;
	sum = 0;
	int a[10];
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % 11;
		cout << "a[" << i << "] = " << a[i] << endl;
	}
	for (i = 0; i < 10; i++)
	{
		if (a[i] % 2 == 0)
		{
			sum += a[i];
		}
	}
	cout << "sum = " << sum << endl;
	getchar();
	getchar();
	return 0;
}