// lab2.cpp: главный файл проекта.

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	int i;
	char str[8];
	cin.getline(str, sizeof(str));
	for (i = 0; i < 8; i++)
	{
		if (str[i] == '.')
		{
			cout << '.';
			cout << '.';
		}
		cout << str[i];
	}
	getchar();
	return 0;
}