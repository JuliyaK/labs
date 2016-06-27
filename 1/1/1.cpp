// 1.cpp: главный файл проекта.

#include "stdafx.h"
#include "iostream"
#include "fstream"
#include "string"

using namespace std;

int main()
{
	int i = 0;
	string str1, str2;
	fstream F;
	ofstream ofs("D:\\f2.txt");
	F.open("D:\\f1.txt", ios::in);
	{
		while (!F.eof())
		{
			getline(F, str1);
			cout << str1 << endl;
			for (i = 0; i < str1.length(); i++)
			{
				if (str1[i] == 1)
				{
					str2[i] = 0;
				}
				if (str1[i] == 0)
				{
					str2[i] = 1;
				}
				else
				{
					str2[i] = str1[i];
				}
			}
			cout << str2 << endl;
		}
		F.close();
		ofs.close();
	}
	getchar();
	return 0;
}
