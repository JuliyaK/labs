// 3.cpp: ������� ���� �������.

#include "stdafx.h"
#include "iostream"
#include "ctime"
#include "fstream"
#include "iomanip"
#include "stdlib.h"
#include "string"
#include "cstdlib"
#include "stdlib.h"


using namespace std;

int main()
{
	char a;
	char b;
	setlocale(LC_ALL, "rus");
	string str;
	int i, j;
	fstream Out;
	fstream F;
	cout << "�������� � ���� ��� �����, ������� ������ ��������� � ������.";
	cout << endl;
	cout << endl;
	cout << "����: ";
	cout << endl;
	cout << "1. �����������;";
	cout << endl;
	cout << "2. ������������.";
	cout << endl;
	cout << "����� ������������: ";
	int input;
	cin >> input;
	switch (input)
	{
	case 1 : 
	{ofstream out("D:\\newfileZ.txt");
	F.open("D:\\file.txt", ios::in);
	{
		while (!F.eof())
		{
			getline(F, str);
			{
				for (i = 0; i < str.length(); i++)
				{
					if (str[i] != '\n')
					{
						a = str[i];
						b = a + 3;
						out << b;
					}
				}
				out << endl;
			}
		}
		F.close();
		out.close();
	}
	}
		break;
	case 2:
	{ofstream R("D:\\newfileR.txt");
		Out.open("D:\\newfileZ.txt", ios::in);
		{
			while (!Out.eof())
			{
				getline(Out, str);
				{
					for (i = 0; i < str.length(); i++)
					{
						if (str[i] != '\n')
						{
							a = str[i];
							b = a - 3;
							R << b;
						}
					}
					R << endl;
				}
			}
			Out.close();
			R.close();
		}
		}
	break;
	default:
		break;
	}
	getchar();
	getchar();
	return 0;
}