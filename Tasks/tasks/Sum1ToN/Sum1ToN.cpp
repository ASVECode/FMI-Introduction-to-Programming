//�� �����o ����o n ��� ������������ �� ����� �� �� ������ ������ 
//�� ������� �� 1 �� n �����������.
//������: n = 5. ������ ������ � : 1 + 2 + 3 + 4 + 5 = 15
//Hint : ����� � ������ �� ������� � ���������� �����,
//� �� ������� � �������������� ? 
//��� ���� �� �� ������ ���� �������� ?
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
	int n;
	cin >> n;
	double result;
	result = n * (1 + n) / 2;
	cout << result << endl;

	int m;
	cin >> m;
	int sum;
	sum = n + m;
	if ((m - n) % 2 == 0) {
		sum *= (m - n) / 2;
		sum += (n + m) / 2;
	}
	else {
		sum *= (m - n + 1) / 2;
	}
	cout << sum;

}
