#include <iostream>
#include <iomanip>  // Required for setw()

using namespace std;

// Constants for the formatting options
#define LEFT 0
#define RIGHT 1
#define CENTER 2

// Function to format and output a string
void formattedCout(string str, int align, int width) {
    int len = str.length();

    // Determine the number of spaces needed for padding
    int spaces = width - len;
    int leftSpaces, rightSpaces;

    switch (align) {
        case LEFT:
            leftSpaces = 0;
            rightSpaces = spaces;
            break;
        case RIGHT:
            leftSpaces = spaces;
            rightSpaces = 0;
            break;
        case CENTER:
            leftSpaces = spaces / 2;
            rightSpaces = spaces - leftSpaces;
            break;
        default:
            // Invalid alignment option, output error message and return
            cout << "Invalid alignment option" << endl;
            return;
    }

    // Output the formatted string
    cout << setw(leftSpaces) << "" << str << setw(rightSpaces) << "" << endl;
}

int main(void) {
    // Call formattedCout() with different strings and formatting options
    formattedCout("Hello Inha", LEFT, 80);
    formattedCout("Welcome SCGS Students!!!", CENTER, 80);
    formattedCout("Welcome Korea", RIGHT, 80);

    return 0;
}

