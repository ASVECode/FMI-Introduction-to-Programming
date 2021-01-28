//Напишете програма, която при въведен радиус r и координати на точка x y, определя, дали точката се намира в окръжност с център(0, 0) и радиус r.
//Пример: Вход: 3 2 2 Изход : true Вход : 2 1 - 2 Изход : false


#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::sqrt;
using std::pow;


int main()
{
	int r, x, y;
	cin >> r >> x >> y;
	int x1, y1, x2, y2;
	x1 = 0;
	y1 = 0;
	x2 = x;
	y2 = y;

	bool isOutside = (sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))) > r;
	if (isOutside) {
		cout << "No - the point is outside in the circle" << endl;
	}
	else {
		cout << "Yes - the point is inside the circle" << endl;
	}
}

