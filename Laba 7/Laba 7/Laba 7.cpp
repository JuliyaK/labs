#include "stdafx.h"
#include <iostream>

using namespace std;

int rec(int m, int n)
{
	if (m == 1)
		return n;
	if (n == m)
		return 1;
	return rec(m - 1, n - 1) + rec(m, n - 1);
}

int main()
{
	int m = 0, n = 0;
	cout << "Enter n=" << endl;
	cin >> n;
	cout << "Enter m=" << endl;
	cin >> m;
	if (n == 10 && (m == 1 || m == 3 || m == 5 || m == 7 || m == 9))
	{
		cout << "c=" << rec(m, n) << endl;
	}
	else
	{
		cout << "vvedeni  ne te chisla" << endl;
	}
	getchar();
	getchar();
	return 0;
}