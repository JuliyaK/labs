// MATRIX.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n, m;
	int max = 0;
	int min = 0;
	int MATRIX[5][5];
	cout << "Исходная матрица 5 на 5: " << endl;
	for (n = 1; n <= 5; n++)
	{
		for (m = 1; m <= 5; m++)
		{
			MATRIX[n][m] = rand() % 10;
			cout << MATRIX[n][m] << " ";
		}
		cout << endl;
	}
	cout << "Главная диагональ: " << endl;
	for (n = 1; n <= 5; n++)
	{
		for (m = 1; m <= 5; m++)
		{
			if (n == m)
			{
				cout << MATRIX[n][m];
			}
		}
	}
	cout << endl;
	cout << "Максимальное число: " << endl;
	for (n = 1; n <= 5; n++)
	{
		for (m = 1; m <= 5; m++)
		{
			if (n == m && MATRIX[n][m] > max)
			{
				max = MATRIX[n][m];
			}
		}
	}
	cout << max << endl;
	cout << "Побочная диагональ: " << endl;
	// n = 1   m = 5
	// n = 2   m = 4
	// n = 3   m = 3
	// n = 4   m = 2
	// n = 5   m = 1
	for (n = 1; n <= 5; n++)
	{
		for (m = 1; m <= 5; m++)
		{
			if ( m + n == 6 || n == m - 4)
			{
				cout << MATRIX[n][m];
			}
		}
	}
	cout << endl;
	cout << "Минимальное значение: " << endl;
	for (n = 1; n <= 5; n++)
	{
		for (m = 1; m <= 5; m++)
		{
			if((m + n == 6 || n == m - 4)&& MATRIX[n][m] < min);
			{
				min = MATRIX[n][m];
			}
		}
	}
	cout << min << endl;
	getchar();
	return 0;
}
