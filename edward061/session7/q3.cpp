#include <iostream>
#include <string>
using namespace std;

char findExtraCharacter(const string& s1, const string& s2) {
    char result = 0;

    for (int i = 0; i < s1.length(); i++) {
        result ^= s1[i];
    }
    
    for (int i = 0; i < s2.length(); i++) {
        result ^= s2[i];
    }

    return result;
}

int main() {
    string s1 = "abcd";
    string s2 = "abecd";

    char extraChar = findExtraCharacter(s1, s2);
    cout << "Extra Character: " << extraChar << endl;

    return 0;
}
