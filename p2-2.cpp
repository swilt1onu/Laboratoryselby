/*
File: P2-2consoleInputOutput
Selby Wilt
9/1/2022

Message program*/

#include <iostream>
#include <string>
using namespace std;
int main() {
	cout << "Hello, my name is Hal!";    // talk to user
	cout << endl << "What is your name? ";   // ask users name
	string user_name;
	getline(cin, user_name);
	cout << "Hello, "; 
	cout << user_name;
	cout << ". I am glad to meet you.";

}