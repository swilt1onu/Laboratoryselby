/*
File: Lab5-1
Selby Wilt
program*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	int sumOfNumbers = 0;
	int sqOfNumbers = 0;


	for (int counter = 2; counter <= 100; counter += 2)
	{
		sumOfNumbers += counter;
	}
	
	cout << "The sum of all even numbers between 2 and 100, inclusive, is " << sumOfNumbers << endl;

	for (int counter = 1; counter <= 100; counter += 1)
	{
		sqOfNumbers = pow(counter, 2) + sqOfNumbers;
	}

	cout << "The sum of all squares between 1 and 100, inclusive, is " << sqOfNumbers << endl;




	return 0;
}


