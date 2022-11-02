#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include <algorithm>
using namespace std;

//prototpe
void displayRun(int array[], int size);
bool hasRun(int values[], int size);
int rollDie(void);

int main() {
    bool check = false;
    srand(time(0));

    while (check == false) {
        const int SIZE = 20;
        int array[SIZE];

        for (int i = 0; i < SIZE; i++) {
            array[i] = rollDie();

        }

        if (hasRun(array, 20) == true) {
            displayRun(array, 20);
            break;
        }
        else {
            cout << "no run: ";
            for (int i = 0; i < SIZE; i++){

                cout << array[i] << " ";
            }
            cout << endl;
        }
    }
}

void displayRun(int array[], int size) {

    cout << "Has run: ";
    for (int i = 0; i < size - 1; i++) {

        if (array[i] == array[i + 1]) {
            cout << "(";

            while (true) {

                if (array[i] == array[i + 1]){

                    cout << array[i] << " ";
                    i++;
                }
                else {
                    cout << array[i] << ")" << " ";
                    break;
                }

            }
        }
        else if (array[i] == array[i - 1] && array[i] != array[i + 1]) {

            cout << array[i] << ")" << " ";
        }
        else {
          cout << array[i] << " ";
        }

    }
}

    int rollDie(void) {
        int dieRollValue = 0;
        dieRollValue = (rand() % 6) + 1;
        return dieRollValue;
    }

    bool hasRun(int values[], int size) {

        for (int i = 0; i < size - 1; i++) {
            if (values[i] == values[i + 1]) {
                return(true);
            }
        }

        return(false);

    }