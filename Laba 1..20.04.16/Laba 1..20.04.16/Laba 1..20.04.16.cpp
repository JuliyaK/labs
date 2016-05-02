// Laba 1..20.04.16.cpp: главный файл проекта.

#include "stdafx.h"
#include "iostream"
#include "ctime"

using namespace std;

int main()
{
	int j, i, k, l;
	int x;
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int a[7][3];
	cout << "способы задания элементов массива: ";
	cout << "1. Ввод с клавиатуры;";
	cout << "2. Заполнение случайным образом;";
	cout << "3. Заполнение из текстового файла;";
	cout << "4. Заполнение из бинарного файла;";
	cout << "ваш выбор: ";
	int imput;
	cin >> imput;
	switch (imput)
	{
	case 1:
		cout << "массив до сортировки: " << endl;
		for (int i = 0; i < 7; i++)
		{
			for (j = 0; j < 3; j++)
			{
				a[i][j] = rand() % 11;
				cout << a[i][j] << ' '
			}
			cout << endl;
		}
		break;
	case 2:
		cout << "массив до сортировки: " << endl;


	default:
		break;
	
			for (l = 0; l < 7; l++)
			{
				for (i = 0; i < 3 - 1; i++)
				{
					x = a[l][i];
					k = i;
					for (j = i + 1; j < 3; j++)
					{
						if (a[l][j] < x)
						{
							x = a[l][j];
							k = j;
						}
					}
						a[l][k] = a[l][i];
						a[l][i] = x;
					}

				}
			cout << "Массив после первой сортировки" << endl;
			for (l = 0; l < 7; l++)
			{
				for (i = 0; i < 3; i++)
				{
					cout << a[l][i] << ' ';
				}
				cout << endl;
			}
			int sum = 0;
			int s;
			cout << "сумма : " << endl;
			for (int counter = 0; counter < 7; counter++) 
			{
				sum += a[counter];
			}
			cout << "массив после второй сортровки: " << a[][] << endl;
	getchar();
	getchar();
	return 0;
}