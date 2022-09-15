/*
File: Lab4-4
Selby Wilt
Message program*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	double customerPays;
	double customerOwes;
	const int DOLLARS = 100;
	const int QUARTERS = 25;
	const int NICKLES = 05;
	const int DIMES = 10;
	const int PENNIES = 1;
	double changeDue;
	int changeOwed;
	int quartersOwed;
	int dollarsOwed;
	int dimesOwed;
	int nicklesOwed;
	int penniesOwed;
	int changeDueInt;

	cout << "Customer owes:$ ";                            //input owed
	cin >> customerOwes;

	cout << "Customer payes:$ ";                          //input payed
	cin >> customerPays;

	changeDue = (customerPays - customerOwes);             //calculating change due
	cout << "Change due is:$";
	cout << changeDue;

	changeDueInt = changeDue * 100;                       //converting changedue to an integer

	if (changeDueInt >= 100) {                             //calculating the amount of dollars
		dollarsOwed = (changeDueInt / DOLLARS);
		changeDueInt = changeDueInt - dollarsOwed * (DOLLARS);
		cout << endl << dollarsOwed << " dollars";
	}
	if (changeDueInt >= 25) {                         //calculating the amount of quarters
		quartersOwed = (changeDueInt / QUARTERS);
		changeDueInt = changeDueInt - quartersOwed * (QUARTERS);
		cout << endl << quartersOwed << " quarters";
	}
	if (changeDueInt >= 10) {                         //calculating the amount of dimes
		dimesOwed = (changeDueInt / DIMES);
		changeDueInt = changeDueInt - dimesOwed * (DIMES);
		cout << endl << dimesOwed << " dimes";
	}
	if (changeDueInt >= 5) {                         //calculating the amount of nickles
		nicklesOwed = (changeDueInt / NICKLES);
		changeDueInt = changeDueInt - nicklesOwed * (NICKLES);
		cout << endl << nicklesOwed << " nickles";
	}
	if (changeDueInt >= 1) {                         //calculating the amount of nickles
		penniesOwed = (changeDueInt / PENNIES);
		changeDueInt = changeDueInt - penniesOwed * (PENNIES);
		cout << endl << penniesOwed << " pennies";
	}



}