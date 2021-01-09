
// Bulls And Cows.cpp 

#include <iostream>

using std::cout;
using std::endl;

const unsigned NUMBER_LENGTH = 4;
bool IsValid(unsigned n);
unsigned* GetDigits(unsigned n);
unsigned CountBulls(unsigned a, unsigned b);
unsigned CountCows(unsigned a, unsigned b);

int main()
{
	cout << CountCows(1234, 4321) << endl;

	cout << CountBulls(1234, 2584) << endl;
}

//Check if the given number is valid
bool IsValid(unsigned n) {
	bool result = 1;

	//Check if n is 4-digit
	if (n < 1234 || n > 9876) {
		result = 0;
	}

	//Check if all digits are different and not zero
	unsigned* digits = GetDigits(n);


	for (unsigned i = 0; i < NUMBER_LENGTH - 1; i++)
	{
		if (digits[i] == 0) {
			result = 0;
			break;
		}

		for (unsigned j = i + 1; j < NUMBER_LENGTH; j++)
		{

			if (digits[i] == digits[j]) {
				result = 0;
				break;
			}
		}
		if (!result) {
			break;
		}
	}
	delete[]digits;
	return result;
}
//Count the number of bulls bewtween two numbers
unsigned CountBulls(unsigned a, unsigned b) {
	unsigned counter = 0;
	unsigned* digitsA = GetDigits(a);
	unsigned* digitsB = GetDigits(b);

	for (unsigned i = 0; i < NUMBER_LENGTH; i++)
	{

		if (digitsA[i] == digitsB[i]) {
			counter++;
		}

	}
	delete[]digitsA;
	delete[]digitsB;
	return counter;
}

//Count the number of cows bewtween two numbers
unsigned CountCows(unsigned a, unsigned b) {
	unsigned counter = 0;
	unsigned* digitsA = GetDigits(a);
	unsigned* digitsB = GetDigits(b);

	for (unsigned i = 0; i < NUMBER_LENGTH; i++)
	{
		for (unsigned j = 0; j < NUMBER_LENGTH; j++)
		{
			if (digitsA[i] == digitsB[j] && i != j) {
				counter++;
			}
		}
	}
	delete[]digitsA;
	delete[]digitsB;

	return counter;
}


unsigned* GetDigits(unsigned n) {
	unsigned* digits = new unsigned[NUMBER_LENGTH];
	for (unsigned i = 0; i < NUMBER_LENGTH; i++)
	{
		unsigned curDigit = n % 10;
		digits[i] = curDigit;
		n /= 10;
	}
	return digits;
}