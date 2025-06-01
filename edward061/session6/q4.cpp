#include <iostream>
#include <string>
#include <sstream>  
#include <vector>  

using namespace std;

int countWords(const string& s) {

    stringstream ss(s);
    string word;
    int wordCount = 0;

    while (ss >> word) {
        wordCount++;
    }

    return wordCount;
}

string inputString() {
    string userInput;
    cout << "Please enter a string: ";
    getline(cin, userInput); 
    return userInput;
}

bool isValidInput(const string& s) {
    if (s.empty()) {
        cout << "Error: The string is empty. Please enter a valid string." << endl;
        return false;
    }
    return true;
}

int main() {

    string userInput = inputString();

    if (!isValidInput(userInput)) {
        return 1;  
    }

    int wordCount = countWords(userInput);

    cout << "The string contains " << wordCount << " words." << endl;

    string test1 = "Yunnan";
    string test2 = "World is hello";

    cout << "The string \"" << test1 << "\" contains " << countWords(test1) << " word(s)." << endl;
    cout << "The string \"" << test2 << "\" contains " << countWords(test2) << " word(s)." << endl;

    string emptyString = "";
    if (!isValidInput(emptyString)) {
        cout << "Error: Empty string detected!" << endl;
    } else {
        cout << "The string \"" << emptyString << "\" contains " << countWords(emptyString) << " word(s)." << endl;
    }

    string largeString = "This is a very long string that contains many words and will be used to test how the program performs with large inputs.";
    cout << "The large string contains " << countWords(largeString) << " words." << endl;

    return 0;
}