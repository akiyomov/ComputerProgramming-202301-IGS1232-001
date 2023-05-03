#include <iostream> // include the standard input/output library

using namespace std; // use the standard namespace

int main() { // define the main function
    int num, count = 0, sum = 0; // initialize variables to store the input numbers, count, and sum

    while (count < 10) { // while loop to prompt the user for 10 numbers
        cout << "Number-" << count+1 << ":"; // prompt the user to input a number
        cin >> num; // store the user input in the num variable
        sum += num; // add the input number to the sum
        count++; // increment the count by 1
    }

    float avg = (float)sum / 10; // calculate the average of the input numbers

    cout << "The sum of 10 numbers: " << sum << endl; // output the sum of the input numbers
    cout << "The Average: " << avg << endl; // output the average of the input numbers

    return 0; // end of the program
}

