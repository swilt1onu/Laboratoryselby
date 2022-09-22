/*
File: Lab5-2
Selby Wilt
program*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	int number;
	int binary;

	cout << "please enter a number: " << endl;
	cin >> number;

	while (number > 0)
	{
		binary = number % 2;
		number = number / 2;
		cout << binary << endl;
	}
	return 0;
}