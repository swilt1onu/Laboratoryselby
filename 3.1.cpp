/*
File: Lab3-1consoleInputOutput
Selby Wilt
9/1/2022

Message program*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	const double ROW10FEETX3 = 29.91; //3rows of fence cost
	double feetOfFencing;        //feet of fencing provided
	const double POST = 10.98;    //post cost
	double totalCost;

	//ask for feet of fencing
	cout << "Enter feet of fencing needed, " << endl;
	cin >> feetOfFencing;

	//calculate the total cost of fencing
	totalCost = ((feetOfFencing / 10) * (ROW10FEETX3 + POST)) + POST;

	//tell user the total cost
	cout << "The total cost will be, " << totalCost;
}
