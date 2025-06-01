#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int number;
    int height;

public:

    Person(string name, int number, int height) {
        this->name = name;
        this->number = number;
        this->height = height;
    }

    string getName() const { return name; }
    int getNumber() const { return number; }
    int getHeight() const { return height; }

    void setName(const string& name) { this->name = name; }
    void setNumber(int number) { this->number = number; }
    void setHeight(int height) { this->height = height; }

    void printDetails() const {
        cout << name << " " << number << " " << height << endl;
    }

    void swap(Person& other) {

        string tempName = this->name;
        int tempNumber = this->number;
        int tempHeight = this->height;

        this->name = other.name;
        this->number = other.number;
        this->height = other.height;

        other.name = tempName;
        other.number = tempNumber;
        other.height = tempHeight;
    }
};

int main() {

    string name1;
    int number1, height1;
    cin >> name1 >> number1 >> height1;

    string name2;
    int number2, height2;
    cin >> name2 >> number2 >> height2;

    Person person1(name1, number1, height1);
    Person person2(name2, number2, height2);

    person1.printDetails();
    person2.printDetails();

    person1.swap(person2);

    person1.printDetails();
    person2.printDetails();

    return 0;
}
