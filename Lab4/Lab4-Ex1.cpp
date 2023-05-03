#include <iostream> // include the standard input/output library

using namespace std; // use the standard namespace

int main() { // define the main function
    int i = 0, t; // initialize variables i and t to 0

    while (i < 2) { // while loop to run the code two times
        cout << "Input the current temperature: "; // prompt the user to input the temperature
        cin >> t; // store the user input in variable t

        if (t < 0) { // if the temperature is less than 0
            cout << "Freezing weather\n"; // output the message "Freezing weather"
        }
        else if ((t > 0) && (t < 10)) { // if the temperature is between 0 and 10
            cout << "Very cold weather\n"; // output the message "Very cold weather"
        }
        else if ((t > 10) && (t < 20)) { // if the temperature is between 10 and 20
            cout << "Cold weather\n"; // output the message "Cold weather"
        }
        else if ((t > 10) && (t < 20)) { // if the temperature is between 10 and 20
            cout << "Normal in temperature\n"; // output the message "Normal in temperature"
        }
        else if ((t > 30) && (t < 40)) { // if the temperature is between 30 and 40
            cout << "It's hot.\n"; // output the message "It's hot."
        }
        else { // if the temperature is greater than or equal to 40
            cout << "It's very hot.\n"; // output the message "It's very hot."
        }

        i++; // increment the value of i by 1
    }

    return 0; // end of the program
}

