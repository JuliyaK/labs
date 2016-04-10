// Laba 6.1.cpp: главный файл проекта.

#include "stdafx.h"
#include "iostream"
#include "cmath"

using namespace std;

int main()
{
	int a, x;
	cout << "Enter a= " << a << endl;
	cin >> a;
	for (x = 0; x <= 10; x++)
	{
		pow(a, x);
	}
	return 0;
}
int main()
{
	int sum = 0;
	int k = 0;
	int temp = 0;
	int x, a;
	{
		temp = pow((x*log(a)), k) / long double (fact(k));
		sum += temp;
		k++;
		return sum;
	}
}
long long fact(int k) 
{
	long long b = 1;
	if (k == 1 || k == 0) return 1;
	b = fact(k - 1)*k;
	return b;
}

