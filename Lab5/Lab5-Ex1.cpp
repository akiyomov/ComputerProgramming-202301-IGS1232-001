#include <iostream>
using namespace::std;

int sum = 0; // Declare a global variable called "sum" and initialize it to 0.

int main() {
    for (int i = 1; i < 10001; i++) { // Use a for loop to iterate from 1 to 10000.
        sum += i; // Add the current value of "i" to "sum".
    }
    cout << "Sum (for loop version): " << sum << '\n'; // Output the value of "sum".

    sum = 0; // Reset "sum" to 0.
    int i = 1; // Declare a local variable called "i" and initialize it to 1.

    do {
        sum += i; // Add the current value of "i" to "sum".
        i++; // Increment "i" by 1.
    } while (i < 10001); // Use a do-while loop to iterate from 1 to 10000.

    cout << "Sum(do-while loop version): " << sum; // Output the value of "sum".

    return 0; // End the program.
}
