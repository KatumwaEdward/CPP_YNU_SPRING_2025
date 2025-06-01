#include <iostream>
#include <cmath>    
using namespace std;

class Circle {
private:
    double radius;

public:

    Circle() {
        radius = 1.0; 
        cout << "Circle created with default radius of " << radius << endl;
    }

    Circle(double r) {
        radius = r; 
        cout << "Circle created with radius " << radius << endl;
    }

    void setRadius(double r) {
        if (r > 0) {
            radius = r; 
        } else {
            cout << "Invalid radius. Must be a positive value." << endl;
        }
    }

    double getRadius() const {
        return radius;
    }

    double area() const {
        return M_PI * pow(radius, 2);
    }

    double circumference() const {
        return 2 * M_PI * radius;
    }

    void display() const {
        cout << "Circle with radius " << radius << ":" << endl;
        cout << "Area: " << area() << endl;
        cout << "Circumference: " << circumference() << endl;
    }

    bool isEqual(const Circle& other) const {
        return radius == other.radius;
    }

    void scale(double factor) {
        if (factor > 0) {
            radius *= factor; 
            cout << "Circle scaled by a factor of " << factor << ". New radius: " << radius << endl;
        } else {
            cout << "Scaling factor must be positive." << endl;
        }
    }
};

int main() {

    Circle circle1; 
    circle1.display(); 

    Circle circle2(5.0); 
    circle2.display(); 

    double newRadius;
    cout << "\nEnter a new radius for circle1: ";
    cin >> newRadius;
    circle1.setRadius(newRadius); 
    circle1.display(); 

    if (circle1.isEqual(circle2)) {
        cout << "\nBoth circles have the same radius." << endl;
    } else {
        cout << "\nThe circles have different radii." << endl;
    }

    double scaleFactor;
    cout << "\nEnter a scaling factor for circle2: ";
    cin >> scaleFactor;
    circle2.scale(scaleFactor); 
    circle2.display();

    return 0;
}
