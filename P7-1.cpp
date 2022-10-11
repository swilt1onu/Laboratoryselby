/*
File: Lab7-a1
Selby Wilt
program*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

double smallest(double x, double y, double z){
	double smallestNum = 0;
	if (x < y && z)
		smallestNum = x;
	if (y < x && z)
		smallestNum = y;
	if (z < x && y)
		smallestNum = z;
	return smallestNum;
}

double average(double x, double y, double z) {
	double averageNum = (x + y + z) / 3;
	return averageNum;
}


int main() {
	double x;
	double y;
	double z;
	cout << "Enter three numbers: ";
	cin >> x >> y >> z;

	cout << "Smallest value is: " << smallest(x, y, z) << endl;
	cout << "Average is: " << average(x, y, z);
}