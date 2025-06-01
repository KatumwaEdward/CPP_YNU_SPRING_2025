#include <iostream>
#include <string>

using namespace std;

string sliceString(const string& s) {

    return s.substr(1, s.length() - 2);
}

int main() {

    string s1 = "Hello";
    string s2 = "World";

    cout << "Sliced string for 'Hello': " << sliceString(s1) << endl;
    cout << "Sliced string for 'World': " << sliceString(s2) << endl;

    return 0;
}