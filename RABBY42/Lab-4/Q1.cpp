#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int *ptr = &a;
    cout << *ptr;
    return 0;
}