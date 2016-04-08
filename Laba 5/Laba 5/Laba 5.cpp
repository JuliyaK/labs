// Laba 5.cpp: главный файл проекта.

#include "stdafx.h"
#include "iostream"
#include "ctime"

using namespace std;

int main()
{
	int i;
	int count = 0;
	int a[3];
	srand(time(NULL));
	for (i = 0; i < 3; i++)
	{
		a[i] = rand()% 11;
		cout << "a[" << i << "] = " << a[i] << endl;
	}
	for (i = 0; i < 3; i++)
	{
		if (a[i] >= 1 && a[i] <= 5)
		{
			count++;
		}
	}
	cout << count << endl;
	getchar();
	return 0;
}
