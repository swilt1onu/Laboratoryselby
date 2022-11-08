/*
Selby Wilt
program*/

#include <iostream>
using namespace std;
const int STUDENTS = 5;
const int QUIZZES = 3;

//prototype
void quizTotal(string names[], int scores[][QUIZZES]);

int main() {


	string names[STUDENTS];
	for (int i = 0; i < STUDENTS; i++) {
		string firstName;
		string lastName;
		string fullName;
		cout << "Enter first and last name of student #" << i + 1;
		cin >> firstName >> lastName;

		fullName = lastName + ", " + firstName;
		names[i] = fullName;
	}



	int scores[STUDENTS][QUIZZES];
	for (int qz = 0; qz < QUIZZES; qz++) {

		for (int st = 0; st < STUDENTS; st++) {
			cout << "Quiz " << (qz + 1) << " score for " << names[qz] << ": ";
			cin >> scores[st][qz];
		}
	}


	cout << endl;
	// calculate the average for each quiz

	for (int qz = 0; qz < QUIZZES; qz++) {
		int sum = 0;
		for (int st = 0; st < STUDENTS; st++) {
			sum += scores[st][qz];
		}
		cout << "Quiz " << (qz + 1) << " average: " << (double)sum / STUDENTS << endl;
	}
	cout << endl;

	quizTotal(names, scores);
}


	
void quizTotal(string names[], int scores[][QUIZZES]){

	// calculate the total score for each student
	for (int st = 0; st < STUDENTS; st++) {
		int total = 0;
		for (int qz = 0; qz < QUIZZES; qz++) {
			total += scores[st][qz];
		}
		cout << " total score for " << names[st] << ": " << total << endl;
	}
	cout << endl;

}



