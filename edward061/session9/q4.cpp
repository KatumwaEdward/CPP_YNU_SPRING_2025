#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company; 
    string model;   
    int year;       

public:

    Car() {
        company = "Unknown";
        model = "Unknown";
        year = 2000; 
        cout << "Car created with default values: " << company << " " << model << " (" << year << ")" << endl;
    }

    Car(string comp, string mod, int y) {
        company = comp;
        model = mod;
        if (y >= 1886 && y <= 2025) { 
            year = y;
        } else {
            cout << "Invalid year. Setting year to default (2000)." << endl;
            year = 2000;
        }
        cout << "Car created with specified values: " << company << " " << model << " (" << year << ")" << endl;
    }

    void setCompany(string comp) {
        company = comp;
    }

    string getCompany() const {
        return company;
    }

    void setModel(string mod) {
        model = mod;
    }

    string getModel() const {
        return model;
    }

    void setYear(int y) {
        if (y >= 1886 && y <= 2025) {
            year = y;
        } else {
            cout << "Invalid year. Please enter a valid year between 1886 and 2025." << endl;
        }
    }

    int getYear() const {
        return year;
    }

    void displayCarInfo() const {
        cout << "Car Information: " << endl;
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }

    bool isNewerThan(const Car& otherCar) const {
        return year > otherCar.year;
    }

    bool isSameCar(const Car& otherCar) const {
        return company == otherCar.company && model == otherCar.model && year == otherCar.year;
    }

    void checkVintageStatus() const {
        if (2025 - year >= 25) {
            cout << "This car is a vintage car!" << endl;
        } else {
            cout << "This car is not vintage." << endl;
        }
    }

    void displayCarAge() const {
        int age = 2025 - year;
        if (age < 0) {
            cout << "The car year is in the future. Please check the input year." << endl;
        } else {
            cout << "This car is " << age << " years old." << endl;
        }
    }
};

int main() {

    Car car1;
    car1.displayCarInfo();  

    Car car2("Toyota", "Corolla", 2015);
    car2.displayCarInfo();  

    car1.setCompany("Honda");
    car1.setModel("Civic");
    car1.setYear(2010);
    cout << "\nUpdated car1 information:" << endl;
    car1.displayCarInfo();

    cout << "\nIs car1 newer than car2? " << (car1.isNewerThan(car2) ? "Yes" : "No") << endl;

    cout << "\nIs car1 the same as car2? " << (car1.isSameCar(car2) ? "Yes" : "No") << endl;

    car1.checkVintageStatus();
    car1.displayCarAge();

    Car car3("Ford", "Mustang", 1880); 
    car3.displayCarInfo();

    return 0;
}
