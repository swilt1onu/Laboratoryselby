/*
File: P2-2consoleInputOutput
Selby Wilt
9/1/2022

Message program*/

#include <iostream>
using namespace std;
int main() {
	double meters;
	double inches;
	double feet;
	double miles;
	cout << "Enter measurement in meters: ";    // talk to user
	cin >> meters;
	inches = meters * 39.37007874;
	feet = meters * 3.2808;
	miles = meters * .000621371192;
	cout << "inches: " << inches;
	cout << endl << "feet: " << feet;
	cout << endl << "miles: " << miles;

}