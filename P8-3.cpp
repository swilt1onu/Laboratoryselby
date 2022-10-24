#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//prototypes
int countWords(string str);

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
		cout << "Word Count: " << countWords(str) << endl;
	}


	return 0;
}

//vowel counting function
int countWords(string str) {

	int wordCount = 1;

	for (int i = 0; i < (str.size()); i++) {
		if (str[i] == ' ') {
			if (str[i + 1] != ' ') {
				wordCount++;
			}
		}	
	}
	return wordCount;
}
