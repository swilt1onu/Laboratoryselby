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
	int userValue;
	int largest=0;
	int smallest = 100000;
	int even = 0;
	int odd = 0;
	bool done = false;


	while (!done)
	{

		
		cout << "Enter values, Q to quit: ";
		cin >> userValue;

		if (cin.fail())
		{
			done = true;
		}

		else 
		{
			if (userValue > largest)
				largest = userValue;
			if (userValue < smallest)
				smallest = userValue;
			if (userValue % 2 == 0)
				even = even + 1;
			if (userValue % 2 == 1)
				odd = odd + 1;
		}


	}

	cout << "Largest Value: " << largest;
	cout << " Smallest Value: " << smallest << endl;
	cout << "Even Number Count: " << even;
	cout << " Odd Number Count: " << odd;

	return 0;
}
