// lab1.cpp: главный файл проекта.

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	int i, j;
	float c[5][5];
	int a[5];
	int b[5];
	cout << "\narray A: \n ";
	for (i = 0; i < 5; i++)
	{
		a[i] = rand() % 21 - 10;
		cout << "a [ " << i << " ] = " << a[i] << endl;
	}
	cout << " \n";
	cout << "\narray B: \n";
	for (j = 0; j < 5; j++)
	{
		b[j] = rand() % 21 - 10;
		cout << "b [ " << j << " ] = " << b[j] << endl;
	}
	cout << "\n";
	cout << "\nmatrix C: \n";
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (((a[i] > 0) && (b[j] > 0)) || ((a[i] < 0) && (b[j] < 0)))
			{
				c[i][j] = a[i] / (1 + b[j]);
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (((a[i] < 0) && (b[j] > 0)) || ((a[i] > 0) && (b[j] < 0)))
			{
				c[i][j] = b[j] / (1 + a[i]);
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((a[i] == 0) || (b[j] == 0))
			{
				c[i][j] = a[i];
			}
			cout << "c [ " << i << " ] " "[" << j << "] = " << c[i][j] << endl;
		}
	}

	getchar();
	return 0;
}