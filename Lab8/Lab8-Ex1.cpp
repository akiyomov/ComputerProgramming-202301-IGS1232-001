#include <iostream>  //Include the input-output stream library

using namespace std; //Use the standard namespace

int FibonacciNum(); //Declare the function FibonacciNum without arguments

int main(void) {  //Main function of the program
    for (int n = 2; n < 20; ++n)  //Loop from n=2 to n=19
        cout << FibonacciNum() << endl;  //Print the nth Fibonacci number
    return 0; //Return 0 to indicate successful program termination
}

int FibonacciNum() {  //Implementation of FibonacciNum function
    static int n1 = 1, n2 = 1, n3;  //Declare and initialize static variables n1, n2, and n3
    n3 = n1 + n2;  //Calculate the next Fibonacci number
    n1 = n2;  //Update the values of n1 and n2
    n2 = n3;
    return n1;  //Return the nth Fibonacci number
}

