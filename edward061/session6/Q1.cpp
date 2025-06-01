#include <iostream>
#include <string>

using namespace std;

struct person {
    string name;  
    int age;          
    bool do_programming; 
};

void displayPersonInfo(const person& p) {

    cout << p.name << " (" << p.age << ")" << endl;
    

    if (p.do_programming) {
        cout << p.name << " loves programming!" << endl;
    } else {
        cout << p.name << " does not enjoy programming." << endl;
    }
}

int main() {

    person p1;
    person p2;

    p1.name = "alice";
    p1.age = 20;
    p1.do_programming = true;

    p2.name = "bob";
    p2.age = 18;
    p2.do_programming = false;

    cout << "Displaying p1's information:" << endl;
    displayPersonInfo(p1);
    cout << "Displaying p2's information:" << endl;
    displayPersonInfo(p2);

    return 0;
}