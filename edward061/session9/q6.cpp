#include <iostream>
#include <cmath>  
using namespace std;

class Shape {
public:

    virtual double area() const = 0;

    virtual double perimeter() const = 0;

    virtual ~Shape() {
        cout << "Shape destructor called." << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:

    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * pow(radius, 2);  
    }

    double perimeter() const override {
        return 2 * M_PI * radius; 
    }

    ~Circle() {
        cout << "Circle destructor called." << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:

    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;  
    }

    double perimeter() const override {
        return 2 * (length + width); 
    }

    ~Rectangle() {
        cout << "Rectangle destructor called." << endl;
    }
};

class Triangle : public Shape {
private:
    double side1, side2, side3;

public:

    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double area() const override {
        double semiPerimeter = perimeter() / 2;
        return sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));
    }

    double perimeter() const override {
        return side1 + side2 + side3;  
    }

    ~Triangle() {
        cout << "Triangle destructor called." << endl;
    }
};

void displayShapeDetails(const Shape& shape) {
    cout << "Area: " << shape.area() << endl;
    cout << "Perimeter: " << shape.perimeter() << endl;
}

int main() {

    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 4.0, 5.0);

    Shape* shapePtr;

    shapePtr = &circle;
    cout << "Circle details:" << endl;
    displayShapeDetails(*shapePtr);

    shapePtr = &rectangle;
    cout << "\nRectangle details:" << endl;
    displayShapeDetails(*shapePtr);

    shapePtr = &triangle;
    cout << "\nTriangle details:" << endl;
    displayShapeDetails(*shapePtr);

    return 0;
}
