// 2.cpp: ������� ���� �������.

#include "stdafx.h"
#include "iostream"
#include "fstream"
#include "string"
#include "cstdlib"
#include "ctime"

using namespace std;

int main()
{
	int A[4][4];
	int B[4];
	int i, j;
	int sum;
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	cout << "��������� ������: " << endl;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A[i][j] = rand() % 11;
			cout << A[i][j] << ' ';
			
		}
		cout << endl;
	}
		cout << "���������� ������: \n";

		for (i = 0; i < 4; i++)
		{
			sum = 0;
			for (j = 0; j < 4; j++)
			{
				sum += A[i][j];
			}
			B[i] = sum;
			cout << B[i] << ' ';
		}
		cout << endl;
		cout << "����� ������ � ������������ ������ � ��������� ������:  " << endl;
		int max = 0;
		int imax;
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 4; j++)
			{
				if (B[i] > max )
				{
					max = B[i];
					imax = i+1;
				}
			}
		}
		cout << imax;
		cout << endl;
	getchar();
	return 0;
}
