#include <iostream>
#include <string>
#include <limits>

using namespace std;

int stringLength(const string& s) {

    if (s.empty()) {
        cout << "The string is empty." << endl;
        return 0;
    }

    return s.length();
}

string inputString() {
    string userInput;
    cout << "Please enter a string: ";
    getline(cin, userInput); 
    return userInput;
}

bool isValidLength(const string& s) {
    if (s.length() < 1 || s.length() > 100000) {
        cout << "Error: The string length must be between 1 and 100000." << endl;
        return false;
    }
    return true;
}

int main() {

    string userInput = inputString();

    if (!isValidLength(userInput)) {
        return 1; 
    }

    cout << "The length of the string \"" << userInput << "\" is: " << length << endl;

    string test1 = "Yunnan";
    string test2 = "Hello1234";

    cout << "Length of the string \"" << test1 << "\": " << stringLength(test1) << endl;
    cout << "Length of the string \"" << test2 << "\": " << stringLength(test2) << endl;

    string emptyString = "";
    cout << "Length of the empty string: " << stringLength(emptyString) << endl;

    string largeString(100000, 'a');  
    cout << "Length of a string with 100000 'a's: " << stringLength(largeString) << endl;

    return 0;
}