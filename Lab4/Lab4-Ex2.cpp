#include <iostream> // include the standard input/output library

using namespace std; // use the standard namespace

int main() { // define the main function
    int a, b, c, i = 0; // initialize variables a, b, c, and i to 0

    while (i < 3) { // while loop to run the code three times
        cout << "Input three integers: "; // prompt the user to input three integers
        cin >> a >> b >> c; // store the user input in variables a, b, and c

        cout << "1st number: " << a << ", " << "2nd number: " << b << ", " << "3rd number: " << c << '\n'; // output the inputted numbers

        if ((a > b) && (a > c)) { // if a is greater than b and c
            cout << "The 1st is the largest of the three\n"; // output that a is the largest
        }
        else if ((b > a) && (b > c)) { // if b is greater than a and c
            cout << "The 2nd is the largest of the three\n"; // output that b is the largest
        }
        else if ((c > a) && (c > b)) { // if c is greater than a and b
            cout << "The 3rd is the largest of the three\n"; // output that c is the largest
        }

        i++; // increment the value of i by 1
    }

    return 0; // end of the program
}


