// Laba.2.rabota s file.cpp: главный файл проекта.

#include "stdafx.h"
#include "iostream"
#include "fstream"
#include "string"
#include "ctime"
#include "conio.h"
#include "stdlib.h"
#include "fstream"


using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string str;
	fstream A;
	A.open("C:\\Users\\Positronica\\Documents\\GitHub\\avto.bin.txt", ios::in);
	{
		while (!A.eof())
		{
			getline(A, str);
			cout << str << endl;
		}
	}
	A.close();
	getchar();
	return 0;
}

