//Напишете програма, която при въведено число n и позиция k намира k - тата цифра
//в десетичния запис на n от дясно наляво.Считаме, че k е по - малко от дължината на n.
//Пример: Вход: 123456 4 Изход : 3 Вход : 1439 1 Изход : 9

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

