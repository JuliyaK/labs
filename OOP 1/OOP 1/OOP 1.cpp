// OOP 1.cpp: ������� ���� �������.

#include "stdafx.h"
#include "iostream"

using namespace std;

class monstr
{
public:
	int health;
	int fotce;
};

int main()
{
	setlocale(LC_ALL, "rus");
	monstr NAME1;
	monstr NAME2;
	NAME1.health = 80;
	cout << "�������� ������� NAME1: " << NAME1.health << endl;
	NAME1.fotce = 75;
	cout << "���� ������� NAME1: " << NAME1.fotce << endl;
	NAME2.health = 30;
	cout << "�������� ������� NAME2: " << NAME2.health << endl;
	NAME2.fotce = 65;
	cout << "���� ������� NAME2: " << NAME2.fotce << endl;
	getchar();
    return 0;
}
