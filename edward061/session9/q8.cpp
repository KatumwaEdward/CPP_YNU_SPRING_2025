#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;
    double performanceScore;

    bool isValidID(int id) const {
        return id > 0;
    }

public:

    Employee(string name, int employeeID, double salary, double performanceScore) {
        if (name.empty()) {
            throw invalid_argument("Name cannot be empty.");
        }
        if (!isValidID(employeeID)) {
            throw invalid_argument("Invalid employee ID.");
        }

        this->name = name;
        this->employeeID = employeeID;
        this->salary = salary;
        setPerformanceScore(performanceScore);
    }

    string getName() const {
        return name;
    }

    void setName(const string& name) {
        if (name.empty()) {
            throw invalid_argument("Name cannot be empty.");
        }
        this->name = name;
    }

    int getEmployeeID() const {
        return employeeID;
    }

    void setEmployeeID(int id) {
        if (!isValidID(id)) {
            throw invalid_argument("Invalid employee ID.");
        }
        employeeID = id;
    }

    double getSalary() const {
        return salary;
    }

    void setSalary(double salary) {
        if (salary < 0) {
            throw invalid_argument("Salary cannot be negative.");
        }
        this->salary = salary;
    }

    double getPerformanceScore() const {
        return performanceScore;
    }

    void setPerformanceScore(double score) {
        if (score < 0 || score > 10) {
            throw invalid_argument("Performance score must be between 0 and 10.");
        }
        performanceScore = score;
        calculateSalaryBasedOnPerformance();
    }

    void calculateSalaryBasedOnPerformance() {
        if (performanceScore >= 9) {
            salary *= 1.2;
        }
        else if (performanceScore >= 7) {
            salary *= 1.1; 
        }
        else if (performanceScore >= 5) {
            salary *= 1.05;
        }

    }

    void displayEmployeeInfo() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Performance Score: " << performanceScore << endl;
        cout << "Salary: $" << salary << endl;
    }

    void displayPerformanceFeedback() const {
        if (performanceScore >= 9) {
            cout << "Outstanding performance! Excellent work!" << endl;
        }
        else if (performanceScore >= 7) {
            cout << "Good performance, but there's room for improvement." << endl;
        }
        else if (performanceScore >= 5) {
            cout << "Average performance, consider additional training or effort." << endl;
        }
        else {
            cout << "Performance below expectations, consider a performance improvement plan." << endl;
        }
    }
};

int main() {
    try {

        Employee emp1("Alice", 101, 50000, 8.5);
        emp1.displayEmployeeInfo();
        emp1.displayPerformanceFeedback();

        cout << "\nUpdating performance score and recalculating salary...\n";
        emp1.setPerformanceScore(9.5);
        emp1.displayEmployeeInfo();
        emp1.displayPerformanceFeedback();

        cout << "\nSetting invalid performance score...\n";
        emp1.setPerformanceScore(11); 
    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    try {

        Employee emp2("Bob", -5, 45000, 7);
    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
