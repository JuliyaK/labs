// Laba 2.1.cpp: главный файл проекта.

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	int M, N, i, sum;
	sum = 0;
	char str[20];
	cout << "Keep an even number: \n" << endl;
	cin.getline(str, sizeof(str));
	cout << "Enter a number M is even : \n" << endl;
	cin >> M;
		cout << "Enter a number N is even: \n" << endl;
		cin >> N;
	for (i = M; i < N; i++)
		{
			if (i % 2 == 0)
			{
				sum += str[i];
			}
		}
	cout << "SUM : " << sum << endl;
	getchar();
	getchar();
	return 0;
}