// Swap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Прочетете две цели числа от стандартния вход и разменете техните стойностти.
//а) чрез използването на трета променлива.
//б) само чрез операциите събиране и изваждане.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a, b;
	cin >> a >> b;

	int temp = a;
	a = b;
	b = temp;

	cout << a << " " << b<<endl;

	a = a + b;
	b = a - b;
	a = a - b;

	
	a << " " << b;

}
