//�������� ��������, ����� ��� �������� ����� n � ������� k ������ k - ���� �����
//� ���������� ����� �� n �� ����� ������.�������, �� k � �� - ����� �� ��������� �� n.
//������: ����: 123456 4 ����� : 3 ���� : 1439 1 ����� : 9

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int FindKDigit(int n, int k) {
	//123456
	int count = k;
	int result;
	while (count > 1) {

		n = n / 10;
		count--;
	}
	result = n % 10;;

	return result;
}

int FindKDigitRec(int n, int k) {
	//123456
	if (k == 1) {
		return n % 10;
	}

	return FindKDigitRec(n / 10, k - 1);
}

int main()
{
	int n, k;
	cin >> n >> k;
	//int result = FindKDigit(n, k);
	int result = FindKDigitRec(n, k);
	cout << result;

}

