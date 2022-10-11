//Selby Wilt 10/11/22 Lab 7-2
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool all_the_same(int x, int y, int z) {
	if (x == y && x == z && y == z)
		return true;
	else {
		return false;
	};

}

bool all_different(int x, int y, int z) {
	if (x != y && x != z && y != z)
		return true;
	else {
		return false;
	}
}

bool sorted(int x, int y, int z) {
	if (x <= y && y <= z)
		return true;
	else {
		return false;
	}
}

int main() {

	double x;
	double y;
	double z;

	while (!cin.fail()) {

		cout << "enter three numbers or Q to quit: ";
		cin >> x >> y >> z;

		if (cin.fail())
			return 0;

		if (all_the_same(x, y, z) == true)
			cout << "Numbers are all the same.\n";

		else {
			cout << "Numbers are not all the same.\n";
		}


		if (all_different(x, y, z) == true)
			cout << "Numbers are all different.\n";

		else {
			cout << "Numbers are not all different.\n";
		}

		if (sorted(x, y, z) == true)
			cout << "Numbers are sorted.\n";

		else {
			cout << "Numbers are not sorted.\n";
		}


	}
	
}