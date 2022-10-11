//Selby Wilt 10/11/22 Lab 7-3
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int first_digit(int n) {
	while (n >= 10) {
		n = n / 10;
	}
	return n;
}

int last_digit(int n) {
	n = n % 10;
	return n;
}

int digits(int n) {
	int count = 0;
	while (n > 0){
		n = n / 10;
		count = count + 1;
	}
	return count;
}


int main() {

	while (!cin.fail()) {
		int n;

		cout << "Enter number or Q to quit: ";
		cin >> n;

		if (cin.fail())
			return 0;

		cout << "First digit: " << first_digit(n);
		cout << " Last digit: " << last_digit(n);
		cout << " Number of digits: " << digits(n) << " \n";
	}
	
}
