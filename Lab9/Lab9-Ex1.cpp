#define _USE_MATH_DEFINES
#include <iostream> // Library for console input/output
#include <cmath> // Library for math functions

using namespace std;

int main() {
    int i = 0, r = 10; // Initialize variables for angle and radius
    double x, y, rad; // Initialize variables for x and y coordinates, and angle in radians
    for (i; i <= 359; ++i) { // Loop through each degree from 0 to 359
        rad = i * (M_PI / 180); // Convert degree to radians
        x = r * cos(i); // Calculate x-coordinate using cosine
        y = r * sin(i); // Calculate y-coordinate using sine
        cout << i << ": " << x << ", " << y << endl; // Print angle and coordinates to console
    }
    return 0;
}
