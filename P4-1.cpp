/*
File: Lab4-1consoleInputOutput
Selby Wilt
9/1/2022
Message program*/

/* solid > 0
liquid < 0 < 100
gas > 100
at 0 solid and liquid
at 100 solid and gas*/

/*farenheit 
solid > 0, liquid > 32 > 212 
gas > 212 
at 32solid and liquid and 212solid and gas */

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {

	string forc; //farenheit or celcius
	int temp;

	cout << "enter temperature using 'temp' 'F' or 'C': " << endl;
	cin >> temp >> forc;


	if (forc == "C") {

		if (temp == 0) {
			cout << "both liquid and solid";
		}
		else if (temp == 100) {
			cout << "both liquid and gas";
		}
		else if (temp > 100) {
			cout << "gas";
		}
		else if (temp > 0) {
			cout << "liquid";
		}
		else if (temp < 0) {
			cout << "solid";
		}
	}
	if (forc == "F") {

		if (temp == 32) {
			cout << "both liquid and solid";
		}
		else if (temp == 212) {
			cout << "both liquid and gas";
		}
		else if (temp > 212) {
			cout << "gas";
		}
		else if (temp > 32) {
			cout << "liquid";
		}
		else if (temp < 32) {
			cout << "solid";
		}
	}
}
