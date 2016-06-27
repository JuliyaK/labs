// binary.cpp.cpp: главный файл проекта.

#include "stdafx.h"
#include "iostream"
#include "fstream"
#include "iomanip"
#include "cstdlib"

inline void eatline() { while (std::cin.get() != '\n') continue; }
struct avto
{
	char marka[3]; //марка автомобиля
	double year; //год выпуска
	char name[3]; //имя владельца
	char number[3]; //Гос нромер
	char color[3]; //цвет автомобиля
};
const char * file = "avto.dat";
int main()
{
	using namespace std;
	avto av;
	cout << fixed << right;
	//отображение начального содержимого
	ifstream fin;
	fin.open(file, ios_base::in | ios_base::binary); //бинарный файл
	if (fin.is_open())
	{
		cout << "Here are the current contents of the" << file << "file:\n";
		while (fin.read((char*)&av, sizeof av))
		{
			cout << setw(3) << av.marka << ": "
				<< setprecision(0) << setw(3) << av.year
				<< setw(3) << av.name
				<< setw(3) << av.number
				<< setw(3) << av.color;
		}
		fin.close();
	}
	//Добавление новых данных
	ofstream fout(file, ios_base::out | ios_base::app | ios_base::binary);
	if (!fout.is_open())
	{
		cerr << "can't open " << file << "file for output:\n";
		exit(EXIT_FAILURE);
	}
	cout << "Enter marka avto:\n";
	cin.get(av.marka, 3);
	while (av.marka[0] != '\0')
	{
		eatline();
	cout << "Enter year:";
	cin >> av.year;
	eatline();
	cout << "Enter name:";
	cin >> av.name;
	eatline();
	cout << "Enter number: ";
	cin >> av.number;
	cout << "Enter color: ";
	cin >> av.color;
	eatline();
	fout.write((char*)&av, sizeof av);
	}
	fout.close();
	fin.clear();
	fin.open(file, ios_base::in | ios_base::binary);
	if (fin.is_open())
	{
		cout << "Here are the current contents of the" << file << "file:\n";
		while (fin.read((char*)&av, sizeof av))
		{
			cout << setw(3) << av.marka << ": "
				<< setprecision(0) << setw(3) << av.year
				<< setw(3) << av.name
				<< setw(3) << av.number
				<< setw(3) << av.color;
		}
		fin.close();
	}
	cout << "Done.\n";
	getchar();
	return 0;
}