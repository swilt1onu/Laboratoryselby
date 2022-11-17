#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
using namespace std;

const int ROWS = 13;

//function prototypes

// findSeatIndex: given user input, returns appropriate column index into seating chart array.
// @param thisSeat - character indicating selected seat within row
// @return appropriate index into 2-D array if the specified seat is valid, ERROR otherwise
int findSeatIndex(char thisSeat);

// findRowIndex: given user input, returns appropriate row index into arrays.
// @param thisRow - integer indicating row selected by the user
// @return appropriate index into 2-D array if the specified row is valid, ERROR otherwise
int findRowIndex(int thisRow);

// displaySeatColumn: given a 2-D mapping of the seating chart in the form [columns][rows],
// will print out a "column" of seats on one row of output (i.e., seat 'A' for all rows in the plane)
// @param seats - reference to a 2-D character array
// @param column - reference to which column of seats to display
void displaySeatColumn(char seats[][ROWS], int column);




int main() {

	
	

	char seats[8][ROWS] = {
		{'D','D','D','D','D','D','D','D','D','D','D','D','D'},
		{'C','C','C','C','C','C','C','C','C','C','C','C','C'},
		{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' ','1','1','1','1'},
		{'1','2','3','4','5','6','7','8','9','0','1','2','3'},
		{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{'B','B','B','B','B','B','B','B','B','B','B','B','B'},
		{'A','A','A','A','A','A','A','A','A','A','A','A','A'}
	};

	string userInput;
	char thisSeat;
	int thisRow = 0;
	string tempString;




	while (true) {
		for (int column = 0; column < 8; column++) {
			displaySeatColumn(seats, column);
		}
		
		cout << "\nEnter a seat or Q to quit : ";
		cin >> userInput;

		if (userInput == "Q" || userInput == "q")
			return 0;
		

		if (userInput.size() == 3) {
			tempString = userInput.substr(0,2);
			thisRow = atoi(tempString.c_str());

			tempString = userInput.substr(2, 1);
			thisSeat = tempString[0];

		}

		else {
			tempString = userInput.substr(0, 1);
			thisRow = atoi(tempString.c_str());

			tempString = userInput.substr(1, 1);
			thisSeat = tempString[0];
		}


		int arrayCol = findRowIndex(thisRow);
		int arrayRow = findSeatIndex(thisSeat);
	
		if (seats[arrayRow][arrayCol] == 'X')
			cout << "Sorry, Seat Already taken\n\n";

		else if(seats[arrayRow][arrayCol] == ' ')
			cout << "Sorry, no such seat exists on the CRJ 200\n";

		else if (arrayCol > 12 || arrayRow < 0) {
			cout << "Sorry, no such seat exists on the CRJ 200\n";
		}

		else{
			seats[arrayRow][arrayCol] = 'X';
		}
		
	}


}



int findRowIndex(int thisRow) {

	int locateCol = 0;

	locateCol = thisRow - 1;
	return locateCol;
}


int findSeatIndex(char thisSeat) {

	int locateRow = 0;

	if (thisSeat == 'A') {
		locateRow = 7;
	}

	else if(thisSeat == 'B') {
		locateRow = 6;
	}

	else if (thisSeat == 'C') {
		locateRow = 1;
	}

	else if (thisSeat == 'D') {
		locateRow = 0;
	}

	else {
		return -2;
	}

	return locateRow;
}



void displaySeatColumn(char seats[][ROWS], int column) {


	for (int row = 0; row < 13; row++) {

		cout << seats[column][row] << " ";

	}
	cout << endl;
	
}




