#include <iostream>
using namespace std;

int main() {
    int i;
    double k;
    string str;

    // Prompt user to input a string
    cout << "Input a string: ";
    // Use a loop to handle unexpected inputs
    while (!(cin >> str)) {
        // Clear the input stream if input is invalid
        cin.clear();
        // Ignore any remaining characters in the input stream
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        // Prompt user to enter a valid string
        cout << "Try again...Input a string: ";
    }
    // Output the user's input string
    cout << "Your input string: " << str << endl;

    // Prompt user to input an integer
    cout << "Input an integer number: ";
    // Use a loop to handle unexpected inputs
    while (!(cin >> i)) {
        // Clear the input stream if input is invalid
        cin.clear();
        // Ignore any remaining characters in the input stream
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        // Prompt user to enter a valid integer
        cout << "Try again...Input an integer number: ";
    }
    // Output the user's input integer
    cout << "Your input integer: " << i << endl;

    // Prompt user to input a real number
    cout << "Input a real number: ";
    // Use a loop to handle unexpected inputs
    while (!(cin >> k)) {
        // Clear the input stream if input is invalid
        cin.clear();
        // Ignore any remaining characters in the input stream
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        // Prompt user to enter a valid real number
        cout << "Try again...Input a real number: ";
    }
    // Output the user's input real number
    cout << "Your input float: " << k << endl;
    cout << endl;
    // Output end-of-program message
    cout << "=== End of the program ===";

    return 0;
}
