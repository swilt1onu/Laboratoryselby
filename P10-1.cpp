/*
File: Lab5-4
Selby Wilt
program*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
const int SIZE = 8;

bool isCardValid(int digits[], int size);


int main() {

	int value = 0;
	int digits[SIZE];
	int userInput = 0;
	int tempValue = 0;

	while (true) {
		cout << "Enter 8-digit credit card # or Q to quit: ";
		cin >> userInput;
		if (cin.fail()) {
			return 1;
		}

		for (int i = SIZE - 1; i >= 0; i--) {

			tempValue = userInput % 10;
			userInput = userInput / 10;
			digits[i] = tempValue;
			tempValue = 0;
		}




		if (isCardValid(digits, SIZE) == true) {
			cout << "Card is valid.\n";
		}
		else {
			cout << "Card is not valid.\n";
		}


	}

	
	
}

bool isCardValid(int digits[], int size) {

	int total=0;
	int digitOddSum=0;
	int digitEvenSum=0;
	int tempValue = 0;
	int tempValue2 = 0;
	int tempValue3 = 0;

	for (int i = SIZE - 1; i >= 0; i = i - 2) {

		digitEvenSum += digits[i];
	
	}

	for (int i = SIZE - 2; i >= 0; i = i - 2) {

		tempValue = digits[i];
		tempValue = tempValue * 2;

		if (tempValue >= 10) {

			tempValue2 = tempValue % 10;
			tempValue3 = tempValue / 10;
			digitOddSum += tempValue2 + tempValue3;
			tempValue = 0;
			tempValue2 = 0;
			tempValue3 = 0;
		}
		else {
			digitOddSum += tempValue;
			tempValue = 0;
		}
	}


	total = digitOddSum + digitEvenSum;

	if (total%10 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}