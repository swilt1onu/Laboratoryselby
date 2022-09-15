/*
File: Lab4-aconsoleInputOutput
Selby Wilt
9/1/2022
Message program*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {

	double price;
	double taxRate;
	double taxTotal;

	cout << fixed << setprecision(2);

	cout << "enter price: " << endl;
	cin >> price;

	cout << "enter taxRate: " << endl;
	cin >> taxRate;

	
	taxTotal = (price * taxRate)/100 ;

	cout << "tax is: ";
	cout << taxTotal;

}
