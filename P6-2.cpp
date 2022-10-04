/*
File: Lab6-2
Selby Wilt
program*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
int main() 
{
    int row;
    int col;
    int n;
    int space;


    cout << "Enter number of asterisks per side ";
    cin >> n;

    space = n - 1;

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= space; col++)
            cout << " ";
        space--;
        for (col = 1; col <= (2 * row - 1); col++)
            cout << "*";
        cout << endl;
    }
    space = 1;
    for (row = 1; row <= (n - 1); row++)
    {
        for (col = 1; col <= space; col++)
            cout << " ";
        space++;
        for (col = 1; col <= (2 * (n - row) - 1); col++)
            cout << "*";
        cout << endl;
    }
    cout << endl;
    return 0;
}