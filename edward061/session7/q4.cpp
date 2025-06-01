#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <cctype> 

using namespace std;

bool isPangram(const string &str) {

    unordered_set<char> letters;

    for (char ch : str) {

        if (isalpha(ch)) {

            ch = tolower(ch);

            letters.insert(ch);
        }
    }

    return letters.size() == 26;
}

int main() {
    string testString1 = "The quick brown fox jumps over the lazy dog";
    string testString2 = "Hello World";
    string testString3 = "Pack my box with five dozen liquor jugs";
    string testString4 = "This is a test string that is missing some letters";

    cout << "Test String 1: " << (isPangram(testString1) ? "Pangram" : "Not a Pangram") << endl;
    cout << "Test String 2: " << (isPangram(testString2) ? "Pangram" : "Not a Pangram") << endl;
    cout << "Test String 3: " << (isPangram(testString3) ? "Pangram" : "Not a Pangram") << endl;
    cout << "Test String 4: " << (isPangram(testString4) ? "Pangram" : "Not a Pangram") << endl;

    return 0;
}
