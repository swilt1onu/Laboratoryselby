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
	int value;
	int valuecopy;
	int digit;
	int digit2;
	int sumOfValue = 0;
	int sumOfValue2 = 0;
	int individual2 = 0;
	int total;
	int variable = 0;
	int individual2
		int variablestotal;
	cout << "Enter a non-zero, positive value: ";
	cin >> value;

	valuecopy = value;

	while (value > 0)
	{
		digit = value % 10;
		value = value / 100;
		sumOfValue = sumOfValue + digit;
	}

	valuecopy = valuecopy / 10;
	while (valuecopy > 0)
	{
		digit2 = valuecopy % 10;
		valuecopy = valuecopy / 100;

		individual2 = digit * 2;
		variable = individual2 % 10;
		individual2 = individual2 / 10;
		variable2 = individual2 % 10;

		variablestotal = variable + variable2;

		sumOfValue2 = variablestotal + sumOfValue2;
	}

	total = sumOfValue2 + sumOfValue;
	
	cout << sumOfValue;
	cout << sumOfValue2;
	cout << total;

	total = total % 10;
		if (total == 0)
		{
			cout << "Card is Valid";
		} 
		else 
		{
			cout << "Card is Invalid";
		}


}