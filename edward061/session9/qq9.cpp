#include <iostream>
#include <string>
using namespace std;

class User {
private:
    string name;

public:

    User() {
        name = "Default";
    }

    User(string userName) {
        name = userName;
    }

    void printName() const {
        cout << "\"" << name << "\"" << endl;
    }
};

int main() {

    User user1;
    user1.printName(); 

    string userName = "YNU";
    User user2(userName);
    user2.printName();

    return 0;
}
