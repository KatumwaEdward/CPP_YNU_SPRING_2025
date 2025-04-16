#include <iostream>
using namespace std;


int fibonacci(int n) {
    if (n <= 1)
        return n;  
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Input a number: ";
    cin >> n;

    int result = fibonacci(n);
    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}
