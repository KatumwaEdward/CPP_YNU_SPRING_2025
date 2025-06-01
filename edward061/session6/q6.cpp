#include <iostream>
#include <string>
#include <sstream>  

using namespace std;

string inputString() {
    string userInput;
    cout << "Please enter a string (can include multiple words): ";
    getline(cin, userInput);  
    return userInput;
}

bool isValidInput(const string& s) {
    if (s.empty()) {
        cout << "Error: The input string is empty. Please enter a valid string." << endl;
        return false;
    }
    return true;
}

void displayString(const string& s) {
    cout << "You entered: " << s << endl;
}

void processWords(const string& s) {
    stringstream ss(s);
    string word;
    cout << "Words in the string: ";
    while (ss >> word) {
        cout << word << " ";
    }
    cout << endl;
}

int main() {

    string userInput = inputString();

    if (!isValidInput(userInput)) {
        return 1;  
    }

    displayString(userInput);

    processWords(userInput);

    cout << "\nNow, let's try with another input example!" << endl;
    string anotherInput = inputString();
    if (isValidInput(anotherInput)) {
        displayString(anotherInput);
        processWords(anotherInput);
    }

    string searchWord = "Yunnan";
    if (userInput.find(searchWord) != string::npos) {
        cout << "\nThe word '" << searchWord << "' is found in your input!" << endl;
    } else {
        cout << "\nThe word '" << searchWord << "' is not found in your input." << endl;
    }

    return 0;
}