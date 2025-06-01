#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <cctype>
#include <vector>

using namespace std;

string normalizeString(string str) {

    for (char &ch : str) {
        ch = tolower(ch); 
    }
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}

bool areAnagrams(string str1, string str2) {

    str1 = normalizeString(str1);
    str2 = normalizeString(str2);

    if (str1.length() != str2.length()) {
        return false;  
    }

    unordered_map<char, int> freq1, freq2;

    for (char ch : str1) {
        freq1[ch]++;
    }

    for (char ch : str2) {
        freq2[ch]++;
    }

    return freq1 == freq2;
}

void checkAnagramSingleTest() {
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    if (areAnagrams(str1, str2)) {
        cout << "\"" << str1 << "\" and \"" << str2 << "\" are anagrams." << endl;
    } else {
        cout << "\"" << str1 << "\" and \"" << str2 << "\" are not anagrams." << endl;
    }
}

void checkAnagramMultipleTests() {
    int t;


    cout << "Enter the number of test cases: ";
    cin >> t;
    cin.ignore(); 

    for (int i = 0; i < t; i++) {
        cout << "\nTest case " << i + 1 << ":" << endl;
        checkAnagramSingleTest(); 
    }
}

void checkAnagramBatchTests() {
    int n;

    cout << "Enter the number of pairs of strings: ";
    cin >> n;
    cin.ignore(); 

    vector<pair<string, string>> testPairs(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter first string for pair " << i + 1 << ": ";
        getline(cin, testPairs[i].first);
        cout << "Enter second string for pair " << i + 1 << ": ";
        getline(cin, testPairs[i].second);
    }

    for (int i = 0; i < n; i++) {
        if (areAnagrams(testPairs[i].first, testPairs[i].second)) {
            cout << "\"" << testPairs[i].first << "\" and \"" << testPairs[i].second << "\" are anagrams." << endl;
        } else {
            cout << "\"" << testPairs[i].first << "\" and \"" << testPairs[i].second << "\" are not anagrams." << endl;
        }
    }
}

int main() {
    cout << "Welcome to the Anagram Checker!" << endl;

    int choice;
    cout << "Choose the mode of operation:" << endl;
    cout << "1. Check a single pair of strings" << endl;
    cout << "2. Check multiple pairs of strings" << endl;
    cout << "3. Check anagram pairs from a batch list" << endl;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;
    cin.ignore(); 

    if (choice == 1) {
        checkAnagramSingleTest();  
    } else if (choice == 2) {
        checkAnagramMultipleTests();
    } else if (choice == 3) {
        checkAnagramBatchTests();  
    } else {
        cout << "Invalid choice! Please enter 1, 2, or 3." << endl;
    }

    cout << "\nThank you for using the Anagram Checker!" << endl;
    return 0;
}
