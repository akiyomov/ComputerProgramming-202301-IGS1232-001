#include <iostream> // include the standard input/output library

using namespace std; // use the standard namespace

int main() { // define the main function
    int i = 1, sum = 0; // initialize variables i and sum to 1 and 0, respectively

    while (i != 10001) { // while loop to add numbers from 1 to 10000 to the sum
        sum += i; // add the value of i to the sum
        i++; // increment the value of i by 1
    }

    cout << "Total sum: " << sum; // output the total sum

    return 0; // end of the program
}

