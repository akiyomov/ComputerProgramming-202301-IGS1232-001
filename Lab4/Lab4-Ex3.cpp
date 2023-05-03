#include <iostream> // include the standard input/output library
#include <string> // include the string library

using namespace std; // use the standard namespace

int main() { // define the main function
    string name; // initialize a string variable to store the customer name
    int a; // initialize an integer variable to store the units consumed

    cout << "Input the name of the customer: "; // prompt the user to input the customer name
    getline(cin, name); // store the user input in the name variable
    cout << "Input the unit (in kWh) consumed by the customer: "; // prompt the user to input the units consumed
    cin >> a; // store the user input in the a variable

    cout << '\n'; // output a newline character
    cout << "===== Electrical Bill =====\n"; // output the header for the bill
    cout << "Customer name: " << name << '\n'; // output the customer name
    cout << "Unit Consumed: " << a << " kWh\n"; // output the units consumed

    if ((a <= 200) && (a > 0)) { // if the units consumed are less than or equal to 200 and greater than 0
        cout << "Charge per unit: " << 100.6 << '\n'; // output the charge per unit
        cout << "Total charge: " << 100.6 * a << '\n'; // output the total charge
    }
    else if ((a > 200) && (a <= 400)) { // if the units consumed are greater than 200 and less than or equal to 400
        cout << "Charge per unit: " << 195.2 << '\n'; // output the charge per unit
        cout << "Total charge: " << 195.2 * a << '\n'; // output the total charge
    }
    if (a > 400) { // if the units consumed are greater than 400
        cout << "Charge per unit: " << 287.9 << '\n'; // output the charge per unit
        cout << "Total charge: " << 287.9 * a << '\n'; // output the total charge
    }

    return 0; // end of the program
}

