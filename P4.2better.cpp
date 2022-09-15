/*
File: Lab3-1consoleInputOutput
Selby Wilt
9/1/2022
Message program*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double num1;
	double num2;
	double num3;

	cout << "enter 3 numbers:                   " << endl;
	cin >> num1 >> num2 >> num3;

	if (num1 > num2 && num1 > num3) {
		cout << num1;
		cout << " is the greatest number";
	}
	else if (num2 > num1 && num2 > num3) {
		cout << num2;
		cout << " is the greatest number";
	}
	else if (num3 > num1 && num3 > num2) {
		cout << num3;
		cout << " is the greatest number";
	}
}