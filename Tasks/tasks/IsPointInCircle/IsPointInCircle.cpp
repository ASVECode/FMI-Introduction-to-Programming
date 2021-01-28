//�������� ��������, ����� ��� ������� ������ r � ���������� �� ����� x y, ��������, ���� ������� �� ������ � ��������� � ������(0, 0) � ������ r.
//������: ����: 3 2 2 ����� : true ���� : 2 1 - 2 ����� : false


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

