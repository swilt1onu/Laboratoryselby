#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void pressEnterToContinue();
bool fileLength(string filename);
bool fileWordCount(string filename);

int main(void) {

    string filename;

    cout << "input file: ";
    getline(cin, filename);

    fileWordCount(filename);
    fileLength(filename);

    pressEnterToContinue();

}

void pressEnterToContinue() {

    cout << "\nPress enter to continue... \n";
    cin.clear();
    while (cin.get() != '\n') continue;

}

bool fileWordCount(string  filename) {

    ifstream inFile;
    string word;
    int wordCount = 0;
    inFile.open(filename);

    if (inFile.fail()) {
        cout << "read error - sorry \n";
        return false;
    }

    while (true) {
        inFile >> word;

        if (inFile.fail())
            break;

        wordCount++;
    }

    cout << "Words: " << wordCount << endl;

    inFile.close();
    return true;

}

bool fileLength(string filename) {

    ifstream inFile;
    char currentChar;
    int length = 0;
    inFile.open(filename);

    if (inFile.fail()) {
        return false;
    }

    while (true) {
        inFile.get(currentChar);

        if (inFile.fail())
            break;

        if (currentChar != ' ' && currentChar != '\n')
            length++;
    }

    cout << "Characters: " << length << endl;

    inFile.close();
    return true;

}
