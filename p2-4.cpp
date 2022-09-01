/*
File: P2-2consoleInputOutput
Selby Wilt
9/1/2022

Message program*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	//list variables
	double length;
	double width;
	double area;
	double perimeter;
	double diagonal;
	cout << "Enter measurement in length: "; //ask user for measurements
	cin >> length;
	cout << "Enter measurement in width: ";
	cin >> width;
	area = length * width; //area formula
	perimeter = (length + width) * 2; //perimeter formula
	diagonal = sqrt(pow(length,2) + pow(width,2)); //diagonal formula
	cout << "area: " << area; 
	cout << endl << "perimeter: " << perimeter;
	cout << endl << "diagonal: " << diagonal;

}