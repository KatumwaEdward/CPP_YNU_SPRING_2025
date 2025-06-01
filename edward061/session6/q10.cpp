#include <iostream>
#include <string>
using namespace std;

int firstOccurrence(const string& txt, const string& pat) {

    int txtLength = txt.length();
    int patLength = pat.length();

    if (patLength > txtLength) {
        return -1;
    }

    for (int i = 0; i <= txtLength - patLength; i++) {

        int j = 0;
        while (j < patLength && txt[i + j] == pat[j]) {
            j++;
        }

        if (j == patLength) {
            return i; 
        }
    }

    return -1;
}

int main() {

    string txt = "YunnanUniversity";
    string pat = "Fr";
    cout << "First occurrence of '" << pat << "' in '" << txt << "' is at index: " << firstOccurrence(txt, pat) << endl;

    txt = "YunnanUniversity";
    pat = "nan";
    cout << "First occurrence of '" << pat << "' in '" << txt << "' is at index: " << firstOccurrence(txt, pat) << endl;

    txt = "YunnanUniversity";
    pat = "gr";
    cout << "First occurrence of '" << pat << "' in '" << txt << "' is at index: " << firstOccurrence(txt, pat) << endl;

    txt = "abc";
    pat = "abcd";
    cout << "First occurrence of '" << pat << "' in '" << txt << "' is at index: " << firstOccurrence(txt, pat) << endl;

    return 0;
}
