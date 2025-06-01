#include <iostream>
using namespace std;

void printAlphabetsInRange(char c1, char c2) {

    if (c1 > c2) {
        char temp = c1;
        c1 = c2;
        c2 = temp;
    }

    for (char c = c1; c <= c2; c++) {

        cout << c << " ";
    }

}

int main() {

    char c1 = 'a', c2 = 'z';
    cout << "Alphabets between '" << c1 << "' and '" << c2 << "' are: ";
    printAlphabetsInRange(c1, c2);
    cout << endl; 

    c1 = 'h', c2 = 'u';
    cout << "Alphabets between '" << c1 << "' and '" << c2 << "' are: ";
    printAlphabetsInRange(c1, c2);
    cout << endl;

    c1 = 'u', c2 = 'h'; 
    cout << "Alphabets between '" << c1 << "' and '" << c2 << "' are: ";
    printAlphabetsInRange(c1, c2); 
    cout << endl;

    return 0;
}