// tabl1.cpp: ������� ���� �������.

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int i, j;
	const int N = 5;
	int MATRIX[N][N];
	cout << "�������� ������� 5 �� 5: " << endl;
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)
		{
			MATRIX[i][j] = rand() % 10;
			cout << MATRIX[i][j] << " ";
		}
		cout << endl;
	}
	cout << "������� ���������: " << endl;
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)
		{
			if (i == j)
			{
				cout << MATRIX[i][j];
			}
		}
	}
	cout << endl;
	int max = 0;
	cout << "������������ ��������: " << endl;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= N; j++)
		{
			if (i == j && MATRIX[i][j] > max)
			{
				max = MATRIX[i][j];
			}
		}
	}
	cout << max << endl;
	cout << "�������� ���������: " << endl;
	// i = 1   j = 5
	// i = 2   j = 4
	// i = 3   j = 3
	// i = 4   j = 2
	// i = 5   j = 1
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)
		{
			if (i + j == N + 1 || i == j - N - 1)
			{
				MATRIX[i][j];
				cout << MATRIX[i][j];
			}
		}
	}
	cout << endl;
	int min = MATRIX[N][0];
	cout << "�����������  ��������: " << endl;
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)
		{
			if ((i + j == N + 1 || i == j - N - 1) && MATRIX[i][j] < min)
			{
				min= MATRIX[i][j];
			}
		}
	}
	cout << min << endl;
	getchar();
	return 0;
}
