#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare an array of 10 elements to store the numbers
    double numbers[10] = { 0 };

    // Prompt the user to enter 10 real numbers
    int i = 0;
    for (i; i < 10; ++i) {
        cout << "Enter a real number: ";
        cin >> numbers[i];
    }
    cout << '\n';

    // Print the values in reverse order
    cout << "== Printing the values in reverse order ==" << endl;
    for (i = 9; i >= 0; --i) {
        cout << numbers[i] << " ";
    }

    return 0;
}
