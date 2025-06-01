#include <iostream>
#include <stdexcept>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    bool isLeapYear(int year) const {
        return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    }

    bool isValidDate(int day, int month, int year) const {

        if (year < 1 || month < 1 || month > 12 || day < 1)
            return false;

        int daysInMonth[] = { 31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        if (day > daysInMonth[month - 1])
            return false;

        return true;
    }

public:

    Date(int day, int month, int year) {
        if (!isValidDate(day, month, year)) {
            throw invalid_argument("Invalid date!");
        }
        this->day = day;
        this->month = month;
        this->year = year;
    }

    int getDay() const {
        return day;
    }

    void setDay(int day) {
        if (!isValidDate(day, month, year)) {
            throw invalid_argument("Invalid day for the given month and year!");
        }
        this->day = day;
    }

    int getMonth() const {
        return month;
    }

    void setMonth(int month) {
        if (!isValidDate(day, month, year)) {
            throw invalid_argument("Invalid month for the given date!");
        }
        this->month = month;
    }

    int getYear() const {
        return year;
    }

    void setYear(int year) {
        if (!isValidDate(day, month, year)) {
            throw invalid_argument("Invalid year for the given date!");
        }
        this->year = year;
    }

    void displayDate() const {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    try {

        Date date1(29, 2, 2024);  
        date1.displayDate();

        Date date2(30, 2, 2023);  
        date2.displayDate();
    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    try {

        Date date3(15, 8, 2025);
        date3.displayDate();

        date3.setDay(32);
        date3.displayDate();
    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
