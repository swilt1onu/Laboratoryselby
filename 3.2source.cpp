/*
File: P3-3consoleInputOutput
Selby Wilt
9/8/2022
Message program*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	//list variables
	int eggsProduced;
	int eggsLeft;
	int cartons;

	cout << "Enter amount of eggs produced: "; //ask for amount of eggs
	cin >> eggsProduced;

	eggsLeft = eggsProduced % 12;

	cartons = eggsProduced / 12;

	cout << "The amount of cartons needed is: " << cartons << endl;

	cout << "The amount of eggs left over is: " << eggsLeft << endl;

}