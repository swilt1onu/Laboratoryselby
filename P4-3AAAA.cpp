/*
File: Lab3-1consoleInputOutput
Selby Wilt
9/1/2022
Message program*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
	double customerPays;
	double customerOwes;
	const int QUARTERS = 25;
	const int NICKLES = 05;
	const int DIMES = 10;
	const int PENNIES = 1;
	double changeDue;
	int changeOwed;
	int quartersOwed;

	cout << "Customer owes:$ ";
	cin >> customerOwes;

	cout << "Customer payes:$ ";
	cin >> customerPays;

	changeDue = (customerPays - customerOwes);
	cout << "Change due is:$";
	cout << changeDue;

	int changeDueInt = changeDue * 100;

	if (changeDue >= 25) {
		quartersOwed = (changeDueInt / QUARTERS);
		changeDue = changeDueInt - quartersOwed * (QUARTERS);
		cout << quartersOwed << "dollars";
	}
	







}