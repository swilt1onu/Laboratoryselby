/*
File: Lab6-3
Selby Wilt
9/1/2022
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;
int main() {

	double numbers;
	double average;
	double derivation = 0.0;
	double count = 0;
	double sum = 0;
	double varience;
	double square = 0;

	cout << "enter numbers - Press Q to quit: ";

	while (!cin.fail()) {
		cin >> numbers;
		sum = sum + numbers;
		count++;
		square = square + (numbers * numbers);
	}

	if (sum == 0)
	{
		cout << "No data to process - exiting";
	}

	else
	{
		count = count - 1;
		average = sum / count;
		varience = (square - ((sum * sum) / count));
		varience = varience / (count - 1);
		derivation = sqrt(varience);
		cout << "n = " << count << ", " << "average = " << fixed << setprecision(2) << average << ", standard derivation = " << fixed << setprecision(5) << derivation;
	}

}