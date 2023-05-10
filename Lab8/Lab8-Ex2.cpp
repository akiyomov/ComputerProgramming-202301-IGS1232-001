#include <iostream>  //Include the input-output stream library

using namespace std;  //Use the standard namespace

bool isPrime(int);  //Declare the function isPrime with an integer argument and a boolean return type

int main(void) {  //Main function of the program
    for (int n = 2; n < 1000; ++n)  //Loop from n=2 to n=999
        if (isPrime(n)) {  //Check if n is prime
            cout << n << endl;  //Print n to the console
        }
    return 0;  //Return 0 to indicate successful program termination
}

bool isPrime(int a) {  //Implementation of isPrime function
    int i = 2;  //Initialize a counter variable i to 2
    if (a < i)  //If a is less than 2, it is not prime
        return false;
    for (i; i < a / 2; ++i)  //Loop through all integers i from 2 to a/2
        if (a % i == 0) {  //If a is divisible by i, it is not prime
            return false;
        }
    return true;  //Otherwise, a is prime
}
