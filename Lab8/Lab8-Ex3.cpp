// Required libraries
#include <iostream>      // Required for console input/output
#include <algorithm>     // Required for std::min() and std::max()

using namespace std;

// Function declarations
void Usage();            // Displays a brief description of the program
int getInteger();        // Prompts the user to enter an integer and returns it
int min3(int n1, int n2, int n3); // Returns the minimum value among three integers
int max3(int n1, int n2, int n3); // Returns the maximum value among three integers
void Result(int n1, int n2, int n3, int mn3, int mx3); // Displays the result in the required format

// Main function
int main(void) {
    // Variable declarations
    int i, n1, n2, n3, mn3, mx3;

    // Display program description
    Usage();

    // Get user input
    cout << "Enter the 1st integer: ";
    n1 = getInteger();
    cout << "Enter the 2nd integer: ";
    n2 = getInteger();
    cout << "Enter the 3rd integer: ";
    n3 = getInteger();

    // Compute the minimum and maximum values
    mn3 = min3(n1, n2, n3);
    mx3 = max3(n1, n2, n3);

    // Display the result
    Result(n1, n2, n3, mn3, mx3);

    return 0;
}

// Function definitions

// Displays a brief description of the program
void Usage() {
    cout << "This program takes three integers as input and calculates and outputs the minimum and maximum values.\n";
    cout << "Please follow the guide below to use the program.\n";
    cout << '\n';

}

// Prompts the user to enter an integer and returns it
int getInteger() {
    int n;
    cin >> n;
    return n;
}

// Returns the minimum value among three integers
int min3(int n1, int n2, int n3) {
    return std::min(std::min(n1, n2), n3);
}

// Returns the maximum value among three integers
int max3(int n1, int n2, int n3) {
    return std::max(std::max(n1, n2), n3);
}

// Displays the result in the required format
void Result(int n1, int n2, int n3, int mn3, int mx3) {
    cout << '\n';
    cout << "The three integers: " << n1 << "," << n2 << "," << n3 << "\n";
    cout << "Minimum value: " << mn3 << "\n";
    cout << "Maximum value: " << mx3 << "\n";
}
