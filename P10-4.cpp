#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

//prototype
vector<int> append(vector<int> a, vector<int> b);
void displayVector(vector<int> append);

int main() {
	vector <int> a = { 1,4,9,16 };
	vector <int> b = { 9,7,4,9,11 };


	displayVector(append(a, b));
}


vector<int> append(vector<int> a, vector<int> b) {

	for (int i = 0; i < size(b); i++) {

		a.push_back(b[i]);
	}
	return a;

}

void displayVector(vector<int> append) {
	for (int i = 0; i < size(append); i++) {

		cout << append[i] << " ";

	}
	

}