#include <iostream>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

string months[12]{ "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

int main() {
    Date date;

    cout << "Enter your date of birth:" << endl;
    cout << "- Year: ";
    cin >> date.year; // Read the year of birth from the user

    cout << "- Month: ";
    cin >> date.month; // Read the month of birth from the user

    cout << "- Day: ";
    cin >> date.day; // Read the day of birth from the user

    cout << '\n';

    cout << "Your DoB: " << months[date.month - 1] << " " << date.day << ", " << date.year; // Display the date of birth using the month names array

    return 0;
}
