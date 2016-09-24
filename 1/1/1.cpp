// 1.cpp: главный файл проекта.

#include "stdafx.h"
#include "iostream"
#include "fstream"
#include "string"

using namespace std;

int main()
{
	int i;
	string str1, str2;
	fstream F;
	ofstream out("D:\\f2.txt");
	F.open("D:\\f1.txt", ios::in);
	{
		while (!F.eof())
		{
			getline(F, str1);
			for (i = 0; i < str1.length(); i++)
			{
				if (str1[i] == '1')
				{
					str2 += '0';
					continue;
				}
				if (str1[i] == '0')
				{
					str2 += '1';
					continue;
				}
				else
				{
					str2 += str1[i];
				}
			}
			out << str2;
		}
		F.close();
		out.close();
	}
	getchar();
	return 0;
}
