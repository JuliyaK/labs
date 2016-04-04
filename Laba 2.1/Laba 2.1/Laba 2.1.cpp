// Laba 2.1.cpp: главный файл проекта.

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	int M, N, i, sum;
	cout << "Enter an even number from the keyboard : \n" << endl;
	cin >> M, N; 
	for (i = (M + 1); i < M; i++)
		if (M >0 && N <= 20)
		{
			{
				sum += i;
			}
		}
	cout << "SUM : " << sum << endl;
	getchar();
	getchar();
	return 0;
}