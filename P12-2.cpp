#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
using namespace std;

//prototypes
int charcnt(char* ptr, char c);
int repeat(char* ptr);



int main() {

	char userInput[80];
	char c;

	cout << "Enter a string: ";
	cin.getline(userInput, 80);

	char* ptr = userInput;

	cout << "Enter a character: ";
	cin >> c;
	
	int charcount = charcnt(ptr, c);
	cout << "The character '" << c << "' appears " << charcount << " times in this string\n";

	int repeatedcharnum = repeat(ptr);
	cout << "There are " << repeatedcharnum << " repeated characters in the string";
	
	int cLength = 0;
	while (ptr[cLength] != '\0') {	
		cLength++;
	}
	

	cout << endl << "The reverse string is: ";
	for (int i = cLength; i >= 0; i--) {

		cout << (ptr[i]);
	}
}

int charcnt(char* ptr, char c) {

	int charCount = 0;

	for (int i = 0; i < 80; i++) {

		if (ptr[i] == c) {
			charCount++;
		}
	}

	return charCount;
}


int repeat(char* ptr) {

	int repeatCount = 0;

	for (int i = 0; i < 80; i++) {

		if (ptr[i] == ptr[i + 1]) {

			repeatCount++;

			if (ptr[i] == ptr[i + 2]) {

				repeatCount--;
			}
		}
		
	}

	return repeatCount;
}

