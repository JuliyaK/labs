// Laba 6.04.cpp: главный файл проекта.

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	int k, i, j;
	int x;
	int a[4][4];
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			a[i][j] = rand() % 11;
			cout << "\na[" << i << "][" << j << "]= " << a[i][j];
		}
	}
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			for (k = 1; k <= 4; k++)
			{

				if (a[i][j] < a[i][k])
				{
					x = a[i][j];
					a[i][j] = a[i][k];
					a[i][k] = x;
					cout << "\na[" << i << "][" << k << "]= " << a[i][k];
				}
			}
		}
	}
	getchar();
	return 0;
}