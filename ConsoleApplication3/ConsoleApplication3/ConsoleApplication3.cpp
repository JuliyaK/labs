// ConsoleApplication3.cpp: главный файл проекта.
#include <stdafx.h>
# include <iostream>

using namespace std;

int main()
{
	int a, b;
	a = 0x11223344;
	b = 0x55667788;
	_asm {
		mov ah, byte ptr a[2];
		xchg ah, byte ptr a[3];
		mov byte ptr a[2], ah;
		mov ah, byte ptr a[0];
		xchg ah, byte ptr a[1];
		mov byte ptr a[0], ah;
		mov ah, byte ptr a[0];
		xchg ah, byte ptr b[0];
		mov byte ptr a[0], ah;
	}
	cout << hex << a;
	cout << "\n" << hex << b;
	getchar();
	return 0;
}