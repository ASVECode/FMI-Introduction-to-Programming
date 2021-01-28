//Намерете корените на уравнението x2 + 3x - 4 = 0

#include <iostream>
using std::cout;
using std::pow;
using std::sqrt;


int main()
{
	double a, b, c;
	a = 1;
	b = 3;
	c = 4;

	double D = b*b - (4 * a * c);
	
	double x1 = (-b - sqrt(D)) / (2 * a);
	double x2 = (-b + sqrt(D)) / (2 * a);

	cout << x1 << " " << x2;
}
