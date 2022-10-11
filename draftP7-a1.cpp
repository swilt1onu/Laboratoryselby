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

	srand(time(0));

	for (int i = 1; i < 120; i++)
	{
		locationX = locationX + (rand() % 2) - (rand() % 2);
		locationY = locationY + (rand() % 2) - (rand() % 2);
	}
	cout << "drunkard 1 finished at: (" << locationX << "," << locationY << ")\n";


	//drunkard 2
	locationX = 0;
	locationY = 0;

	for (int i = 1; i < 120; i++)
	{
		locationX = locationX + (rand() % 2) - (rand() % 2);
		locationY = locationY + (rand() % 2) - (rand() % 2);
	}


	cout << "drunkard 2 finished at: (" << locationX << "," << locationY << ")\n";


	//drunkard 3
	locationX = 0;
	locationY = 0;

	for (int i = 1; i < 120; i++)
	{
		locationX = locationX + (rand() % 2) - (rand() % 2);
		locationY = locationY + (rand() % 2) - (rand() % 2);
	}


	cout << "drunkard 3 finished at: (" << locationX << "," << locationY << ")\n";

	//drunkard 4
	locationX = 0;
	locationY = 0;

	for (int i = 1; i < 120; i++)
	{
		locationX = locationX + (rand() % 2) - (rand() % 2);
		locationY = locationY + (rand() % 2) - (rand() % 2);
	}


	cout << "drunkard 4 finished at: (" << locationX << "," << locationY << ")\n";


	//drunkard 5
	locationX = 0;
	locationY = 0;

	for (int i = 1; i < 120; i++)
	{
		locationX = locationX + (rand() % 2) - (rand() % 2);
		locationY = locationY + (rand() % 2) - (rand() % 2);
	}


	cout << "drunkard 5 finished at: (" << locationX << "," << locationY << ")\n";


	//drunkard 6
	locationX = 0;
	locationY = 0;

	for (int i = 1; i < 120; i++)
	{
		locationX = locationX + (rand() % 2) - (rand() % 2);
		locationY = locationY + (rand() % 2) - (rand() % 2);
	}


	cout << "drunkard 6 finished at: (" << locationX << "," << locationY << ")\n";

	//drunkard 7
	locationX = 0;
	locationY = 0;

	for (int i = 1; i < 120; i++)
	{
		locationX = locationX + (rand() % 2) - (rand() % 2);
		locationY = locationY + (rand() % 2) - (rand() % 2);
	}


	cout << "drunkard 7 finished at: (" << locationX << "," << locationY << ")\n";

	//drunkard 8
	locationX = 0;
	locationY = 0;

	for (int i = 1; i < 120; i++)
	{
		locationX = locationX + (rand() % 2) - (rand() % 2);
		locationY = locationY + (rand() % 2) - (rand() % 2);
	}


	cout << "drunkard 8 finished at: (" << locationX << "," << locationY << ")\n";

	//drunkard 9
	locationX = 0;
	locationY = 0;

	for (int i = 1; i < 120; i++)
	{
		locationX = locationX + (rand() % 2) - (rand() % 2);
		locationY = locationY + (rand() % 2) - (rand() % 2);
	}


	cout << "drunkard 9 finished at: (" << locationX << "," << locationY << ")\n";

	//drunkard 10
	locationX = 0;
	locationY = 0;

	for (int i = 1; i < 120; i++)
	{
		locationX = locationX + (rand() % 2) - (rand() % 2);
		locationY = locationY + (rand() % 2) - (rand() % 2);
	}


	cout << "drunkard 10 finished at: (" << locationX << "," << locationY << ")";


}
