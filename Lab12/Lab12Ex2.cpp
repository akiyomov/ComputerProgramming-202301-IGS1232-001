#include <iostream>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

struct Student {
    int id;
    Date dob; // Date of Birth
    Date graduation; // Graduation date
};

string months[12]{ "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

Student getStudentInfo(void); // Function prototype for getting student information
void displayStudentInfo(Student s); // Function prototype for displaying student information

int main() {
    // Student = {id, BoD{Y, M, D}, Graduation{Y, M, D}}
    Student s1 = { 123, {2000, 1, 1}, {2026, 2, 28} };

    cout << "Init Student Info...==>" << endl;
    displayStudentInfo(s1); // Displaying initial student information

    cout << '\n';

    cout << "Input the new student information: " << endl;
    s1 = getStudentInfo(); // Getting new student information from the user

    cout << '\n';

    cout << "Received Student Info...==>" << endl;
    displayStudentInfo(s1); // Displaying the updated student information

    return 0;
}

void displayStudentInfo(Student s) {
    cout << "Student ID: " << s.id << endl;
    cout << "Date of Birth: " << months[s.dob.month - 1] << " " << s.dob.day << ", " << s.dob.year << endl;
    cout << "Expected graduation date: " << months[s.graduation.month - 1] << " " << s.graduation.day << ", " << s.graduation.year;
}

Student getStudentInfo(void) {
    Student s;
    cout << "Student ID: ";
    cin >> s.id;
    cout << "Date of Birth(Y M D): ";
    cin >> s.dob.year >> s.dob.month >> s.dob.day;
    cout << "Expected graduation date(Y M D): ";
    cin >> s.graduation.year >> s.graduation.month >> s.graduation.day;

    return s;
}

