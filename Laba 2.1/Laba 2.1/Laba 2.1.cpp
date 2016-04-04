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
	for (i = 2; i < 20; i++)
		{
				sum += str[i];
		}
	cout << "SUM : " << sum << endl;
	getchar();
	getchar();
	return 0;
}