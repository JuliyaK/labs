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
	monstr()
	{
		health = 0;
		fotce = 0;
	}
	int getH() const
	{
		return health;
	}
	int getF() const
	{
		return fotce;
	}
	void setH(int count)
	{
		int p = count + fotce;
		if (p > 150)
		{
			count -= (p - 150);
		}
		if (count <= 0)
		{
			health = 1;
		}
		else if (count > 100)
		{
			health = 100;
		}
		else health = count;
	}
	void setF( int count)
	{
		int p = health + count;
		if (p > 150)
		{
	 	health -= (p - 150);
		}
		if (count <= 0)
		{
			fotce = 1;
		}
		else if (count > 100)
		{
			fotce = 100;
		}
		else { fotce = count; }
	}
	};

	int main()
	{
		setlocale(LC_ALL, "rus");
		monstr name1, name2;
		name1.setH(52);
		name1.setF(120);
		cout << "Здоровье монстра NAME1: " << name1.getH() << endl;
		cout << "Сила монстра NAME1: " << name1.getF() << endl;
		name2.setH(90);
		cout << "Здоровье монстра NAME2: " << name2.getH() << endl;
		name2.setF(0);
		cout << "Сила монстра NAME2: " << name2.getF() << endl;
		getchar();
		getchar();
		return 0;
	}
