/*
File: Lab7-a1
Selby Wilt
program*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main() {
	//drunkard 1
	int locationX = 0;
	int locationY = 0;
	int numOfMinutes1 = 0;
	double expectedFinal1 = 0;

	cout << "Enter the number of minutes for each drunkard to stagger: ";
	cin >> numOfMinutes1;
	numOfMinutes1 = numOfMinutes1 * 60;


	srand(time(0));
	for (int i = 1; i < 100; i++)
	{
		for (int i = 1; i < numOfMinutes1; i++)
		{
			locationX = locationX + (rand() % 2) - (rand() % 2);
			locationY = locationY + (rand() % 2) - (rand() % 2);
		}
		cout << "drunkard " << i << " finished at : (" << locationX << ", " << locationY << ")\n";
		expectedFinal1 = expectedFinal1 + locationX + locationY;
		locationX = 0;
		locationY = 0;
	}

	expectedFinal1 = expectedFinal1;
	cout << "Expected distance is: " << expectedFinal1;











}