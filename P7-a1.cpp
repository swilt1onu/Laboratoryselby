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

	int locationX = 0;
	int locationY = 0;

	srand(time(0));
	for (int i = 1; i < 11; i++)
	{
		for (int i = 1; i < 120; i++)
		{
			locationX = locationX + (rand() % 2) - (rand() % 2);
			locationY = locationY + (rand() % 2) - (rand() % 2);
		}
		cout << "drunkard " << i << " finished at : (" << locationX << ", " << locationY << ")\n";
		locationX = 0;
		locationY = 0;
	}
}