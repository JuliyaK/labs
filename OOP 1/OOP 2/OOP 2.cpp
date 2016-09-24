// OOP 2.cpp: главный файл проекта.

#include "stdafx.h"
#include "iostream"

using namespace std;

class monstr
{
private:
	int health;
	int fotce;
public:
	void setH(int H)
	{
		health = H;
	};
	void setF(int F)
	{
		fotce = F;
	};
	int getH()
	{
		return health;
	};
	int getF()
	{
		return fotce;
	};
};

int main()
{
	setlocale(LC_ALL, "rus");
	monstr NAME1;
	monstr NAME2;
	NAME1.setH(36);
	cout << "Здоровье монстра NAME1: " << NAME1.getH() << endl;
	NAME1.setF(86);
	cout << "Сила монстра NAME1: " << NAME1.getF() << endl;
	NAME2.setH(30);
	cout << "Здоровье монстра NAME2: " << NAME2.getH() << endl;
	NAME2.setF(68);
	cout << "Сила монстра NAME2: " << NAME2.getF() << endl;
	getchar();
	return 0;
}
