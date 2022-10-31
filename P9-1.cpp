#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include <algorithm>
using namespace std;

//prototypes
void getRandomInt(int* n);
void sortIntReverseOrder(int n);
                  

int main() {
	srand(time(0));

	int n[10];
	getRandomInt(n);

	cout << "The random integers: ";
	for (int i = 0; i < 10; i++) {

		cout << (n[i]) << " ";
	}
	
	cout << endl << "Even indices:        ";
	for (int i = 0; i < 10; i = i + 2) {

		cout << (n[i]) << " ";
	}
	
	cout << endl << "Even values:         ";
	for (int i = 0; i < 10; i++) {
		if (n[i] % 2 == 0) {
			cout << (n[i]) << " ";
		}

	}

	cout << endl << "Reversed order:      ";
	for (int i = 9; i >= 0; i--) {
	
		cout << (n[i]) << " ";
	}

	cout << endl << "First and last:      ";
	cout << (n[0]) << " ";
	cout << (n[9]) << " ";
}

void getRandomInt(int* n) {
	//int n;

	for (int i = 0; i < 10; i++) {
		n[i] = (rand() % 8999) + 1000;

	}

}
