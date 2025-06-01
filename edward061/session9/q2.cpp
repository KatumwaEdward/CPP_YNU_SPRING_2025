#include <iostream>
using namespace std;

// Rectangle class definition
class Rectangle {
private:
    double length;  // Private member variable for length
    double width;   // Private member variable for width

public:
    // Default constructor
    Rectangle() {
        length = 1.0;  // Default length
        width = 1.0;   // Default width
        cout << "Rectangle created with default length and width: " << length << " x " << width << endl;
    }

    // Parameterized constructor
    Rectangle(double l, double w) {
        length = l;  // Set length to the given value
        width = w;   // Set width to the given value
        cout << "Rectangle created with length " << length << " and width " << width << endl;
    }

    void setLength(double l) {
        if (l > 0) {
            length = l; 
        } else {
            cout << "Invalid length. Must be a positive value." << endl;
        }
    }

    void setWidth(double w) {
        if (w > 0) {
            width = w; 
        } else {
            cout << "Invalid width. Must be a positive value." << endl;
        }
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    double area() const {
        return length * width; 
    }

    double perimeter() const {
        return 2 * (length + width);  
    }

    void display() const {
        cout << "Rectangle with length " << length << " and width " << width << ":" << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int main() {

    Rectangle rect1; 
    rect1.display(); 

    Rectangle rect2(5.0, 3.0); 
    rect2.display(); 

    double newLength, newWidth;
    cout << "\nEnter a new length for rect1: ";
    cin >> newLength;
    rect1.setLength(newLength); 

    cout << "Enter a new width for rect1: ";
    cin >> newWidth;
    rect1.setWidth(newWidth); 
    rect1.display(); 

    return 0;
}
