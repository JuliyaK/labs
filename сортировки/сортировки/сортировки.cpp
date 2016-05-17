// сортировки.cpp: главный файл проекта.

#include "stdafx.h"
#include "iostream"
#include "ctime"
#include "fstream"
#include "iomanip"
#include "stdlib.h"
#include "string"
#include "fstream"

using namespace std;

int main()
{
	int j, i, k, l;
	int x ;
	string str;
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	fstream F;
	int a[7][3];
	cout << "способы задания элементов массива: ";
	cout << endl;
	cout << "1. Заполнение случайным образом;";
	cout << endl;
	cout << "2. Ввод с клавиатуры;";
	cout << endl;
	cout << "3. Заполнение из текстового файла;";
	cout << endl;
	cout << "Ваш выбор: " << endl;
	int input;
	cin >> input;
	switch (input)
	{
	case 1:
		cout << endl;
		cout << "массив до сортировки: " << endl;
		for (int i = 0; i < 7; i++)
		{
			for (j = 0; j < 3; j++)
			{
				a[i][j] = rand() % 11;
				cout << a[i][j] << ' ';
			}
			cout << endl;
		}
		break;
	case 2:
		cout << "Введите массив размерностью 3 х 7";
		cout << endl;
		cout << "массив до сортировки: " << endl;
		for (i = 0; i < 7; i++)
		{
			for (j = 0; j < 3; j++)
			{
				cin >> a[i][j];
			}
			cout << endl;
		}
		break;
	case 3:
		F.open("C:\\Users\\Positronica\\Documents\\GitHub\\file.txt", ios::in);
		{
			int count1 = 0;
			int count2 = 0;
			while (!F.eof())
			{
				getline(F, str);
				cout << str << endl;
				string b;
				for (i = 0; i < str.length(); i++)
				{
					if (str[i] != ' ')
					{
						b += str[i];
					}
					else
					{
						a[count1][count2] = stoi(b);
						count2++;
						b = "";
					}
				}
				if (b != "")
				{
					a[count1][count2] = stoi(b);
					b = "";
				}
				count1++;
				count2 = 0;
			}
			F.close();
		}

		break;
	default:
		break;
	}
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
	int sum1 = 0;
	int sum2 = 0;
	int t;
	x = 0;
	for (i = 0; i < 7; i++)
	{
		for (t = i; t < 6; t++)
		{
			sum1 = 0;
			sum2 = 0;
			for (j = 0; j < 3; j++)
			{
				sum1 += a[i][j];
				sum2 += a[t + 1][j];
			}
			if (sum1 > sum2)
			{
				for (j = 0; j < 3; j++)
				{
					x = a[i][j];
					a[i][j] = a[t + 1][j];
					a[t + 1][j] = x;
				}
			}
		}
	}
	cout << "массив после второй сортровки: "<< endl;
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	getchar();
	getchar();
	return 0;
}