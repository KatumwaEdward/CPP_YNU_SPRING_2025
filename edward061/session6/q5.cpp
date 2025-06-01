#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

string reverseString(const string& s) {
    string reversed = s;   
    reverse(reversed.begin(), reversed.end());  
    return reversed;  
}

int main() {

    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput);

    string reversedString = reverseString(userInput);

    cout << "Reversed string: " << reversedString << endl;

    cout << "Reversed 'Hello': " << reverseString("Hello") << endl;
    cout << "Reversed 'World': " << reverseString("World") << endl;

    return 0;
}