// MASS.cpp: ������� ���� �������.

#include "stdafx.h"
#include "iostream"
#include "ctime"

using namespace std;

int MAX(int **mas, int N)
{
	int max;
	max = mas[N][N];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == j && mas[i][j] > max)
			{
				max = mas[i][j];
			}
		}
	}
	return max;
}

int MIN(int **mas, int N)
{
	int min;
	min = mas[N][N];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (j == N - i - 1 && mas[i][j] < min)
			{
				min = mas[i][j];
			}
		}
	}
	return min;
}

int main()
{
	srand((unsigned int)time(NULL));
	setlocale(LC_ALL, "rus");
	int N;
	int **mas;
	cout << "������� ������ ������� : " << endl;
	cin >>  N;
	mas = new int *mas[N][N]; // ��� ��� �� ���� ������ ��� ���������. ���� ��� �� ��������� ��������, �� �� ���� ��� ���������.
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			mas[i][j] = rand() % 11;
			cout << mas[i][j] << "  ";
		}
	}
	cout << endl << "�������� - " << (MAX(mas, N)) << endl;
	cout << endl << "������� - " << (MIN(mas, N)) << endl;
    return 0;
}
