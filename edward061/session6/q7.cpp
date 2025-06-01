#include <iostream>
#include <string>

using namespace std;

int findPattern(const string& s, const string& p) {

    size_t pos = s.find(p);

    if (pos == string::npos) {
        return -1; 
    } else {
        return static_cast<int>(pos);  
    }
}

int main() {

    string s1 = "Hello", p1 = "llo";
    string s2 = "World", p2 = "Doodle";

    cout << "Input: s = \"" << s1 << "\", p = \"" << p1 << "\"" << endl;
    cout << "Output: " << findPattern(s1, p1) << endl; 
    
    cout << "\nInput: s = \"" << s2 << "\", p = \"" << p2 << "\"" << endl;
    cout << "Output: " << findPattern(s2, p2) << endl; 

    return 0;
}
