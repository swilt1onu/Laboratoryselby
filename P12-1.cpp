#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
using namespace std;

//prototypes
double average(double* a, int size);
double maximum(double* a, int size);
double minimum(double* a, int size);


int main() {
	
	//size of the array
	int size = 0;
	cout << "enter size of array: ";
	cin >> size;

	//array
	double* a = new double[size];

	cout << "Enter " << size << " floating-point values: ";
	for (int i = 0; i < size; i++) {

		cin >> a[i];
	}

	
	cout << "Average is: " << average(a, size) << endl;


	int elementNumMax = 0;
	double maximumNum = maximum(a, size);

	for (int i = 0; i < size; i++) {
		if (a[i] != maximumNum) {
			elementNumMax++;
		}
		if (a[i] == maximumNum) {
			break;
		}
	}

	cout << "Maximum value is element #" << elementNumMax << ": " << maximumNum << endl;

	int elementNumMin = 0;
	double minimumNum = minimum(a, size);

	for (int i = 0; i < size; i++) {
		if (a[i] != minimumNum) {
			elementNumMin++;
		}
		if (a[i] == minimumNum) {
			break;
		}
	}

	cout << "Minimum value is element #" << elementNumMin << ": " << minimumNum;




}


double average(double* a, int size) {

	double sumOfArray = 0.0;
	double averageOfArray = 0.0;

	for (int i = 0; i < size; i++) {

		sumOfArray += a[i];
	}

	averageOfArray = sumOfArray / size;
	return averageOfArray;
}

double maximum(double* a, int size) {

	double maxValue = -60000000000.0;

	for (int i = 0; i < size; i++) {

		if (a[i] > maxValue) {
			maxValue = a[i];
		}

	}
	return maxValue;
}


double minimum(double* a, int size) {

	double minValue = 10000000000.0;

	for (int i = size-1; i >= 0; i--) {

		if (a[i] < minValue) {
			minValue = a[i];
		}

	}
	return minValue;
}