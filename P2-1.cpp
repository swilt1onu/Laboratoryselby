/*
File: P2-1consoleInputOutput
Selby Wilt
9/1/2022

Message program*/

#include <iostream>
#include <string>
using namespace std;
int main() {
	cout << "Hello, my name is Hal!";    // talk to user
	cout << endl << "What would you like me to do?   ";   // ask user what it wants to do
	string user_input;
	getline(cin, user_input);
	cout << "Im sorry, I can't do that"; //tell user it cant do it
	
}