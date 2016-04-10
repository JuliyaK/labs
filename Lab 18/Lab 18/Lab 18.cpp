#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	int i;
	int a[20];
	int count = 0;

	cout << "Array" << endl;
	for (i = 0; i < 20; i++) {
		a[i] = rand() % 41 - 10;
		cout << a[i] << " ";
		if (a[i] % 5 == 0) {
			count++;
		}
	}
	cout << endl;
	cout << "Result: " << count << endl;
	getchar();
	return 0;
}
