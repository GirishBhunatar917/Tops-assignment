#include<iostream>
using namespace std;

class date {
    int day, month, year;
public:
    void get() {
        cout << "Enter day:";
        cin >> day;
        cout << "Enter month:";
        cin >> month;
        cout << "Enter year:";
        cin >> year;
    }

    void display() {
        cout << day << "-" << month << "-" << year;
    }

    void isValidDate() {
        if (year < 0 ||
            month < 1 || month > 12 ||
            day < 1 ||
            (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? day > 29 : day > 28) ||
            ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) ||
            (day > 31)) {
            cout << " is an invalid date." << endl;
        } else {
            cout << " is a valid date." << endl;
        }
    }
};

int main() {
    date obj;
    obj.get();
    cout << "Entered date: ";
    obj.display();
    obj.isValidDate();
    return 0;
}
