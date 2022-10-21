#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//prototypes
int countVowel(string str);

//main function
int main(void) {
	string input;

	while (true) {
		string str;
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
	
		if (input == "Q")
			break;

		str = str + input;
		cout << "Vowel count: " << countVowel(str) << endl;
	}

	
	return 0;
}

//vowel counting function
int countVowel(string str) {

	int vowelcount = 0;

	for (int i = 0; i < (str.size()); i++) {
		if (str[i] == 'a' || str[i] == 'i' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' ||
			str[i] == 'A' || str[i] == 'E' || str[i] == 'E' || str[i] == 'O' || str[i] == 'U') {
			vowelcount++;
		}
	}
	return vowelcount;
}


