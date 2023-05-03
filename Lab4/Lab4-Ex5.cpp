#include <iostream> // include the standard input/output library

using namespace std; // use the standard namespace

int main() { // define the main function
    int num; // initialize a variable to store the input number

    while (true) { // infinite loop to continuously prompt the user for input
        cout << "Enter a positive integer number (or -1 to exit): "; // prompt the user to input a number
        cin >> num; // store the user input in the num variable

        if (num == -1) { // if the user inputs -1, exit the program
            cout << "End of the program\n";
            break; // break out of the loop
        }
        else if (num % 2 == 0) { // if the number is even
            cout << num << ": even number\n"; // output that the number is even
        }
        else { // if the number is odd
            cout << num << ": odd number\n"; // output that the number is odd
        }
    }

    return 0; // end of the program
}
