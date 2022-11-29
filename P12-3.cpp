#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>


using namespace std;
unsigned long strlength(const char* str);
int strcompare(const char* s1, const char* s2);


int main() {
	char str1[999];
	char str2[999];
	int str1Length = 0;
	int str2Length = 0;
	int lexicograph = 0;

	cout << "Enter string 1: ";
	cin.getline(str1, 80);
	cout << "Enter string 2: ";
	cin.getline(str2, 80);

	const char* s1 = str1;
	const char* s2 = str2;

	str1Length = strlength(str1);
	cout << "String 1 is " << str1Length << " characters long.\n";
	str2Length = strlength(str2);
	cout << "String 2 is " << str2Length << " characters long.\n";

	lexicograph = strcompare(s1, s2);
	if (lexicograph < 0) {
		cout << "string 2 lexicographically comes before string 1";
	}
	if (lexicograph > 0) {
		cout << "string 1 lexicographically comes before string 2";
	}
	if (lexicograph == 0) {
		cout << "both strings have the same askii value";
	}
}

unsigned long strlength(const char* str) {

	unsigned long cLength = 0;
	while (str[cLength] != '\0') {
		cLength++;
	}
	return cLength;
}


int strcompare(const char* s1, const char* s2) {

	int a;
	if (strlength(s1) > strlength(s2))
	{
		a = strlength(s1);
	}
	else
	{
		a = strlength(s2);
	}

	for (int i = 0; i < a; i++)
	{
		if (s1[i] != s2[i])
		{
			return s2[i] - s1[i];
		}
		i++;
	}

	return 0;
}
