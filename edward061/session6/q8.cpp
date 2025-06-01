#include <iostream>
#include <string>
using namespace std;

string getSubstring(const string &s, int L, int R) {

    return s.substr(L, R - L + 1);
}

int main() {

    string s1 = "cdbkdub";
    int L1 = 0, R1 = 5;

    cout << "Input string: " << s1 << endl;
    cout << "L = " << L1 << ", R = " << R1 << endl;
    cout << "Substring: " << getSubstring(s1, L1, R1) << endl;
    cout << "Explanation: Starting from index " << L1 << " ('" << s1[L1] << "') to index " << R1 << " ('" << s1[R1] << "')." << endl << endl;

    string s2 = "sdiblcsdbud";
    int L2 = 3, R2 = 7;

    cout << "Input string: " << s2 << endl;
    cout << "L = " << L2 << ", R = " << R2 << endl;
    cout << "Substring: " << getSubstring(s2, L2, R2) << endl;
    cout << "Explanation: Starting from index " << L2 << " ('" << s2[L2] << "') to index " << R2 << " ('" << s2[R2] << "')." << endl << endl;

    string s3 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int L3 = 5, R3 = 20;

    cout << "Input string: " << s3 << endl;
    cout << "L = " << L3 << ", R = " << R3 << endl;
    cout << "Substring: " << getSubstring(s3, L3, R3) << endl;
    cout << "Explanation: Starting from index " << L3 << " ('" << s3[L3] << "') to index " << R3 << " ('" << s3[R3] << "')." << endl << endl;

    return 0;
}
