/*
File: Lab6-1
Selby Wilt
program*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	int n;
	int row;
	int col;

	cout << "enter an integer greater or equal to 3: ";
	cin >> n;

	for (row = 1; row <= n; row++)
	{
		for (col = 1; col <= n; col++)
		{
			cout << "*";
		}
		cout << " ";
		for (col = 1; col <= n; col++)
		{
			if (row != 1 && row != n)
			{
				if (col != 1 && col != n)
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
			else
			{
				cout << "*";
			}
		}
		
		cout << endl;
	}








}