#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//prototypes
int romanCharValue(char r);
int convertRomanToInt(string s);

//main function
int main(void) {
	char r =0;

	while (true) {
		string s;
		cout << "Enter Roman number or Q to quit: ";
		getline(cin, s);

		if (s == "Q")
			break;

		cout << s << " = " << convertRomanToInt(s) << endl;

	}


	return 0;
}


int convertRomanToInt(string s) {
	int total = 0;
	
	while (s.length() > 0) {

		if (romanCharValue(s[0]) >= romanCharValue(s[1])) {
			total += romanCharValue(s[0]);
			s.erase(0,1);
		}
		else {
			total+= (romanCharValue(s[1]) - romanCharValue(s[0]));
			s.erase(0, 1);
			s.erase(0, 1);
		}
	}
	return total;
}



int romanCharValue(char r) {
	int number = 0;
	if (r == 'I')
		number = 1;
	if (r == 'V')
		number = 5;
	if (r == 'X')
		number = 10;
	if (r == 'L')
		number = 50;
	if (r == 'C')
		number = 100;
	if (r == 'D')
		number = 500;
	if (r == 'M')
		number = 1000;
	return number;
}