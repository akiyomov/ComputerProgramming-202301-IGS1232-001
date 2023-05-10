#include <iostream>

using namespace std;

// function prototypes
void display(int a);
void display(char a);
void display(double a);

// main function
int main() {
    display('A');  // calls the display function for a character
    display(1234); // calls the display function for an integer
    display(123.4); // calls the display function for a double
    return 0;
}

// function definition for displaying an integer
void display(int a) {
    cout << "int type: " << a << endl;
}

// function definition for displaying a character
void display(char a) {
    cout << "char type: " << a << endl;
}

// function definition for displaying a double
void display(double a) {
    cout << "double type: " << a << endl;
}
