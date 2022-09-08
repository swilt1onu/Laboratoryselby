/*
File: P3-5consoleInputOutput
Selby Wilt
9/8/2022
Message program*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	//list variables
	double costAll;
	int numPurchased;
	double tax;
	double shipping;
	double orderTotal;
	

	cout << "Enter cost of all books: ";
	cin >> costAll;
	cout << "Enter amount of books: ";
	cin >> numPurchased;

	shipping = numPurchased * 2.5;
	tax = costAll * .075;
	orderTotal = costAll + tax + shipping;

	cout << "Total price of order: $" << orderTotal << endl;

}