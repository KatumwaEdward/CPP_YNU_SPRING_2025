Using Two-Pointer Technique
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int start = 0;
    int end = str.length() - 1;

    while(start < end) {
        if(str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    string str = "abba";
    if(isPalindrome(str)) {
        cout << str << " is a palindrome!" << endl;
    } else {
        cout << str << " is not a palindrome!" << endl;
    }
    return 0;
}

Using String Reversal
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    
    return str == reversed;
}

int main() {
    string str = "abcba";
    if(isPalindrome(str)) {
        cout << str << " is a palindrome!" << endl;
    } else {
        cout << str << " is not a palindrome!" << endl;
    }
    return 0;
}

Using Recursion
#include <iostream>
#include <string>
using namespace std;

bool isPalindromeHelper(string str, int start, int end) {
    if(start >= end) return true;
    if(str[start] != str[end]) return false;
    return isPalindromeHelper(str, start + 1, end - 1);
}

bool isPalindrome(string str) {
    return isPalindromeHelper(str, 0, str.length() - 1);
}

int main() {
    string str = "abba";
    if(isPalindrome(str)) {
        cout << str << " is a palindrome!" << endl;
    } else {
        cout << str << " is not a palindrome!" << endl;
    }
    return 0;
}

Using Stack (for more complex scenarios)
#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isPalindrome(string str) {
    stack<char> s;

    for(char ch : str) {
        s.push(ch);
    }

    for(char ch : str) {
        if(ch != s.top()) {
            return false;
        }
        s.pop();
    }
    
    return true;
}

int main() {
    string str = "abcba";
    if(isPalindrome(str)) {
        cout << str << " is a palindrome!" << endl;
    } else {
        cout << str << " is not a palindrome!" << endl;
    }
    return 0;
}

Using Simple Loop
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int n = str.length();
    for(int i = 0; i < n / 2; i++) {
        if(str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string str = "abc";
    if(isPalindrome(str)) {
        cout << str << " is a palindrome!" << endl;
    } else {
        cout << str << " is not a palindrome!" << endl;
    }
    return 0;
}
