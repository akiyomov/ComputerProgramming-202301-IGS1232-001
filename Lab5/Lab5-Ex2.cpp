#include <iostream>
using namespace::std;

int sum1, sum2 = 0; // Declare and initialize two global variables to store the sum of two different series of numbers.

int main() {
    for (int i = 1; i < 31; i++) { // Iterate through integers from 1 to 30 and calculate the sum of their squares.
        sum1 += (i + 2) * (i + 2);
    }

    for (int i = -10; i < 11; i++) { // Iterate through two nested loops to calculate the sum of a quadratic expression of two variables over a certain range.
        for (int j = 1; j < 5; j++) {
            sum2 += i * i + 2 * j * j + 1;
        };
    }
    cout << "Program output of exercise #2===>" << '\n';

    cout << "\nS1: " << sum1 << '\n'; // Output the sum of the first series.
    cout << "S2: " << sum2 << '\n'; // Output the sum of the second series.

    cout << "\n<===End of the program output";
    return 0; // End the program.
}
