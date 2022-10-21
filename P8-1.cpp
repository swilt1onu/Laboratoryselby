//Selby Wilt 10/11/22 Lab 7-3
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

//prototypes
int dayOfWeek(int month, int day, int year);


int main() {
	int weekdayNumber = 0;
	int month = 0;
	int day = 0;
	int year = 0;
	string dayName;
	string monthName;

	
	while (!cin.fail()) {
		cout << "Enter a date or Q to quit: ";
		cin >> month >> day >> year;

		if (cin.fail()) {
			break;
		}

		weekdayNumber = dayOfWeek(month, day, year);

		if (weekdayNumber == 1) {
			dayName = "Sunday, ";
		}
		if (weekdayNumber == 2) {
			dayName = "Monday, ";
		}
		if (weekdayNumber == 3) {
			dayName = "Tuesday, ";
		}
		if (weekdayNumber == 4) {
			dayName = "Wednesday, ";
		}
		if (weekdayNumber == 5) {
			dayName = "Thursday, ";
		}
		if (weekdayNumber == 6) {
			dayName = "Friday, ";
		}
		if (weekdayNumber == 0) {
			dayName = "Saturday, ";
		}
		if (month == 1) {
			monthName = "January ";
		}
		if (month == 2) {
			monthName = "Februrary ";
		}
		if (month == 3) {
			monthName = "March ";
		}
		if (month == 4) {
			monthName = "April ";
		}
		if (month == 5) {
			monthName = "May ";
		}
		if (month == 6) {
			monthName = "June ";
		}
		if (month == 7) {
			monthName = "July ";
		}
		if (month == 8) {
			monthName = "August ";
		}
		if (month == 9) {
			monthName = "September ";
		}
		if (month == 10) {
			monthName = "October ";
		}
		if (month == 11) {
			monthName = "November ";
		}
		if (month == 12) {
			monthName = "December ";
		}

		//displaying the values in the correct format
		cout << dayName << monthName << day << ", " << year << endl;

	}
	
}




int dayOfWeek(int month, int day, int year) {
	int the_weekday = 0;
	int m = 0;
	int Y = 0;

	//sets the month 1 and to 
	if (month == 1 || month == 2) {
		year = year - 1;
		month = month + 12;
	}

	//m is the modified month
	m = month;

	//Y is the modified year
	Y = year;

	the_weekday = (day + ((m + 1) * 26) / 10) + Y;
	the_weekday = (the_weekday + (Y / 4) + (6 * (Y / 100)) + (Y / 400)) % 7;

	return the_weekday;
}

