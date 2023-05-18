#include <iostream>
#include <string>

using namespace std;

void coutInt(int value, int base = 10, string end_string = "\n");

int main() {
    // Call coutInt with different arguments to demonstrate its usage
    coutInt(128);          // Default base (10) and end_string ("\n")
    coutInt(128, 10, " "); // Base 10, end_string is a space
    coutInt(128, 10);      // Base 10, default end_string ("\n")
    coutInt(128, 8, ", "); // Base 8, end_string is ", "
    coutInt(128, 8);       // Base 8, default end_string ("\n")
    coutInt(128, 16);      // Base 16, default end_string ("\n")

    return 0;
}

void coutInt(int value, int base, string end_string) {
    // Print the value in the specified base with the given end_string
    if (base == 8)
        cout << oct << value << end_string;  // Print as octal
    else if (base == 16)
        cout << hex << value << end_string;  // Print as hexadecimal
    else
        cout << value << end_string;         // Print as decimal
}

