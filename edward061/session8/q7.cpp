#include <iostream>
using namespace std;

struct Complex {
    double real;      
    double imaginary; 
};

Complex add(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real + c2.real;            
    result.imaginary = c1.imaginary + c2.imaginary; 
    return result;
}

void display(const Complex& c) {
    if (c.imaginary >= 0) {
        cout << c.real << " + " << c.imaginary << "i" << endl;
    } else {
        cout << c.real << " - " << -c.imaginary << "i" << endl;
    }
}

int main() {

    Complex c1, c2, result;

    cout << "Enter real and imaginary parts of the first complex number (c1):" << endl;
    cout << "Real part: ";
    cin >> c1.real;
    cout << "Imaginary part: ";
    cin >> c1.imaginary;

    cout << "Enter real and imaginary parts of the second complex number (c2):" << endl;
    cout << "Real part: ";
    cin >> c2.real;
    cout << "Imaginary part: ";
    cin >> c2.imaginary;

    result = add(c1, c2);

    cout << "The result of adding the complex numbers is: ";
    display(result);

    return 0;
}
