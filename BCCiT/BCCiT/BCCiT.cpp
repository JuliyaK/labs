// BCCiT.cpp: ������� ���� �������.

#include "stdafx.h"
#include "iostream"

using namespace std;
int main()
{
	int A = 0x11223344;
	int B = 0x55667788;
	setlocale(LC_ALL, "rus");
	cout << "��������� ��������� ����� A: " << hex << A << endl;
	cout << "��������� ��������� ����� B:  " << hex << B << endl;
	_asm
	{
	
		mov ah, byte ptr A[0];
		xchg ah, byte ptr B[0];
		mov byte ptr A[0], ah;
		mov ah, byte ptr A[1];
		xchg ah, byte ptr B[1];
		mov byte ptr A[1], ah;
		mov ah, byte ptr A[2];
		xchg ah, byte ptr B[2];
		mov byte ptr A[2], ah;
		mov ah, byte ptr A[3];
		xchg ah, byte ptr B[3];
		mov byte ptr A[3], ah;
	}
	cout << "����� ������������ A: " << hex << A << endl;
	cout << "����� ������������ B: " << hex << B << endl;
	getchar();
    return 0;
}
