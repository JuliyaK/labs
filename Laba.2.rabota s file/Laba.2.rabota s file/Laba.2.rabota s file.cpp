// Laba.2.rabota s file.cpp: ������� ���� �������.
#include "stdafx.h"
#include "iostream"
#include "ctime"
#include "fstream"
#include "iomanip"
#include "stdlib.h"
#include "string"
#include "fstream"
#include "Windows.h"

using namespace std;
typedef struct avto
{
	string marka;
	int year;
	string name;
	string number;
	string color;
}avto_t;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
	cout << "����� ��������� �������? ";
	cout << endl;
	cout << "1. �������� ����������� ��������� �����;";
	cout << endl;
	cout << "2. ���������� ���������� � ����� ��������� �����;";
	cout << endl;
	cout << "3. ����� ���������� �� ��������� �����;";
	cout << endl;
	cout << "4. ����� �� �����.";
	cout << endl;
	cout << "��� �����: " << endl;
	int input;
	cin >> input;
	switch (input)
	{
	case 1:
	{	
		string str;
		string word;
		int count = 0;
		fstream F;
		F.open("C:\\Users\\Positronica\\Documents\\GitHub\\avto.bin.txt", ios::in);
		avto_t garage[10];
		while (!F.eof())
		{
			getline(F, str);
			cout << str << endl;
			if (str == "")
			{
				continue;
			}
			int word_count = 1;
			for (int i = 0; i < str.length(); i++)
			{
				if (str[i] != ' ')
				{
					word += str[i];
				}
				else
				{
					switch (word_count)
					{
						case 1:
						{
							garage[count].marka = word;
							break;
						}
						case 2:
						{
							garage[count].year = stoi(word);
							break;
						}
						case 3:
						{
							garage[count].name = word;
							break;
						}
						case 4:
						{
							garage[count].number = word;
							break;
						}
					}
					word_count++;
					word = "";
				}
			}
			garage[count].color = word;
			word = "";
			count++;
			word_count = 1;
		}
		F.close();
		ofstream output_file("C:\\Users\\Positronica\\Documents\\GitHub\\avto.bin", ios::binary);
		output_file.write((char*)&garage, sizeof(garage));
		output_file.close();
	}
	break;
	case 2:
		{
			avto_t garage[1];
			cout << "������� ����� ������: ";
			cin >> garage[0].marka;
			cout << endl;
			cout << "������� ��� �������: ";
			cin >> garage[0].year;
			cout << endl;
			cout << "������� ��� ���������:";
			cin >> garage[0].name;
			cout << endl;
			cout << "������� ���.�����: ";
			cin >> garage[0].number;
			cout << endl;
			cout << "������� ����: ";
			cin >> garage[0].color;
			cout << endl;
			ofstream output_file("C:\\Users\\Positronica\\Documents\\GitHub\\avto.bin", ios::binary | ios::in | ios::out | ios::ate);
			output_file.write((char*)&garage, sizeof(garage));
.			output_file.close();
			break;
		}
	case 3:
	{
		avto_t garage[10];
		ifstream input_file("C:\\Users\\Positronica\\Documents\\GitHub\\avto.bin", ios::binary);
		input_file.read((char*)&garage, sizeof(garage));
		input_file.close();

		ofstream text_file("C:\\Users\\Positronica\\Documents\\GitHub\\avto.report.txt");
		text_file << "����� ������ ��� ������� ��� ��������� ���. ����� ���� \n";

		for (int i = 0; i < 10; i++)
		{
			avto_t car = garage[i];
			cout << "# " << i << endl;
			cout << "����� ������: " << garage[i].marka << endl;
			cout << "��� �������: " << garage[i].year << endl;
			cout << "��� ���������: " << garage[i].name << endl;
			cout << "���. �����: " << garage[i].number << endl;
			cout << "���� ������: " << garage[i].color << endl;

			text_file << car.marka << " " << car.year << " " << car.name << " " << car.number << " " << car.color << "\n";
		}

		text_file.close();
		break;
	}
	case 4:
	{
		string color;
		cout << "������� ���� ������: ";
		cin >> color;
		avto_t garage[10];
		ifstream input_file("C:\\Users\\Positronica\\Documents\\GitHub\\avto.bin", ios::binary);
		input_file.read((char*)&garage, sizeof(garage));
		input_file.close();
		for (int i = 0; i < 10; i++)
		{
			if (color == garage[i].color)
			{
				cout << "# " << i << endl;
				cout << "����� ������: " << garage[i].marka << endl;
				cout << "��� �������: " << garage[i].year << endl;
				cout << "��� ���������: " << garage[i].name << endl;
				cout << "���. �����: " << garage[i].number << endl;
				cout << "���� ������: " << garage[i].color << endl;
			}
		}
		break;
	}
	default:
		break;
	}
	getchar();
	getchar();
	return 0;
}