#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include <algorithm>
using namespace std;

//prototypes
bool isSortedIncreasing(int values[], int size);
bool isSortedDecreasing(int values[], int size);
bool hasAdjacentDuplicates(int values[], int size);
bool hasDuplicates(int values[], int size);


//main function
int main() {
	int values[6] = {0,0,0,0,0,0};

	//entering the input
	for (int i = 0; i < 6; i++) {

		cout << "Enter Integer #" << i << " ";
		cin >> values[i];
	}


	//checks for sorted increasing
	if (isSortedIncreasing(values, 6) == true)
		cout << "The data are increasing.";
	else {
		cout << "The data are not increasing.";
	}
	cout << endl;


	//checks for sorted decreasing
	if (isSortedDecreasing(values, 6) == true)
		cout << "The data are decreasing.";
	else {
		cout << "The data are not decreasing.";
	}
	cout << endl;


	//checks for adjacent dupliacates
	if (hasAdjacentDuplicates(values, 6) == true)
		cout << "The data has adjacent duplicates.";
	else {
		cout << "The data does not have adjacent duplicates.";
	}
	cout << endl;


	//checks for duplicated anywhere
	if (hasDuplicates(values, 6) == true)
		cout << "The data has duplicates.";
	else {
		cout << "The data does not have duplicates.";
	}



}




//functions
bool isSortedIncreasing(int values[], int size) {
	
	if (values[5] >= values[4] && values[4] >= values[3] && values[3] >= values[2] && values[2] >= values[1] && values[1] >= values[0]) {
		return true;
	}

	else {
		return false;
	}

}

bool isSortedDecreasing(int values[], int size) {

	if (values[0] >= values[1] && values[1] >= values[2] && values[2] >= values[3] && values[3] >= values[4] && values[4] >= values[5]) {
		return true;
	}

	else {
		return false;
	}

}

bool hasAdjacentDuplicates(int values[], int size){

	if (values[0] == values[1] || values[1] == values[2] || values[2] == values[3] || values[3] == values[4] || values[4] == values[5]) {
		return true;
	}

	else {
		return false;
	}

}

bool hasDuplicates(int values[], int size) {

	for (int i = 0; i < 5; i++) {
		if (values[i] == values[1] || values[i] == values[2] || values[i] == values[3] || values[i] == values[4] || values[i] == values[5]) {
			return true;
		}

		else {
			return false;
		}

	}          


}



