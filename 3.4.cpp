/*
File: P3-4consoleInputOutput
Selby Wilt
9/8/2022
Message program*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	//list variables
	double costNew;
	double mpg;
	double milesPerYear;
	double priceOfGas;
	double yearsUsed;
	double resaleAmount;
	double netCost;
	double netGas;

	cout << "Enter cost of car: ";
	cin >> costNew;
	cout << "Enter MPG: ";
	cin >> mpg;
	cout << "Enter miles driven per year: ";
	cin >> milesPerYear;
	cout << "Enter gas price: ";
	cin >> priceOfGas;
	cout << "Enter years of use: ";
	cin >> yearsUsed;
	cout << "Enter resale amount: ";
	cin >> resaleAmount;

	netGas = ((milesPerYear * yearsUsed) / mpg) * priceOfGas;
	netCost = netGas + costNew - resaleAmount;

	cout << "Total cost of ownership: $" << netCost << endl;

}