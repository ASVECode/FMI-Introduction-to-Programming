//Напишете програма, която по дадени 2 страни на триъгълник, намира и отпечатва максималната дължина за третата му страна.
//Примери
//Вход : 8 10 Изход : 17
//Вход : 5 7 Изход : 11

#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main()
{
	int a, b;
	cin >> a >> b;
	int maxC = a + b - 1;
	cout << maxC << endl;
}

