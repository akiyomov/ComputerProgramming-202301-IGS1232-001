// This program demonstrates how to count the number of digits in an integer
#include <iostream>
using namespace std;

// Function to count the number of digits in an integer
int nDigits(int i) {
    if (i == 0)
        return 0;
    else {
        return 1 + nDigits(i / 10);
    }
}

// Main function to test the nDigits function
int main(void) {
    cout << nDigits(1) << ":" << 1 << endl;
    cout << nDigits(10) << ":" << 10 << endl;
    cout << nDigits(999) << ":" << 999 << endl;
    cout << nDigits(1230) << ":" << 1230 << endl;
    cout << nDigits(-1) << ":" << -1 << endl;
    cout << nDigits(-10) << ":" << -10 << endl;
    cout << nDigits(-999) << ":" << -999 << endl;
    cout << nDigits(-1230) << ":" << -1230 << endl;
    return 0;
}
