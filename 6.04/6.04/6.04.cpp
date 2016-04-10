// 6.04.cpp: главный файл проект

#include "stdafx.h"
#include "iostream"
#include "cstdlib"
#include "ctime"

using namespace std;

int main()
{
	int i, j, k, z, x;
	int a[3][3];
	srand(time(NULL));
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			a[i][j] = rand() % 11;
			cout << a[i][j] << endl;
		}
	}
	cout << "\n\r";
	for (i = 0; i < 3; i++)
	{
		for (z = 2; z >= 0; z--)
		{
			for (j = 0; j < z; j++)
			{
			if (a[i][j] > a[i][j+1])
				{
					x = a[i][j];
					a[i][j] = a[i][j+1];
					a[i][j+1] = x;
				}
			}
		}
	}
	cout << endl;
	cout << "new massiv: " << endl;
	for (i = 0; i < 3; i++)
	{
			for (k = 0; k < 3; k++)
			{
				cout << a[i][k] <<  endl;
			}
	}
	getchar();
	return 0;
}
