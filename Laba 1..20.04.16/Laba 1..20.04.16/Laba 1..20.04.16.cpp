// Laba 1..20.04.16.cpp: ������� ���� �������.

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
	cout << "������� ������� ��������� �������: ";
	cout << "1. ���� � ����������;";
	cout << "2. ���������� ��������� �������;";
	cout << "3. ���������� �� ���������� �����;";
	cout << "4. ���������� �� ��������� �����;";
	cout << "��� �����: ";
	int imput;
	cin >> imput;
	switch (imput)
	{
	case 1:
		cout << "������ �� ����������: " << endl;
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
		cout << "������ �� ����������: " << endl;


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
			cout << "������ ����� ������ ����������" << endl;
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
			cout << "����� : " << endl;
			for (int counter = 0; counter < 7; counter++) 
			{
				sum += a[counter];
			}
			cout << "������ ����� ������ ���������: " << a[][] << endl;
	getchar();
	getchar();
	return 0;
}