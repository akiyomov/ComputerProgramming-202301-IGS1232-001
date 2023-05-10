#include <iostream>
#include <string>
using namespace std;

// function that checks if a string is a palindrome
bool isPalindrome(string str);

int main(void) {
    string str;
    cout << "Enter a string:"; // prompt user for input
    getline(cin, str); // read in entire line, including spaces
    while (str != "") { // continue asking for input until an empty line is entered
        if (isPalindrome(str)) { // if the input is a palindrome
            cout << "The string is a palindrome." << endl; // print confirmation message
            cout << '\n'; // add an empty line for readability

            break; // exit the loop
        }
        else { // if the input is not a palindrome
            cout << "Enter a string:"; // prompt user for input again
            getline(cin, str); // read in another line
            continue; // restart the loop
        }

    }
    cout << "End of the program." << endl; // print end of program message
    return 0;
}

// function that checks if a string is a palindrome
bool isPalindrome(string str) {
    int len = str.length(); // get the length of the string
    for (int i = 0; i < len / 2; i++) { // loop through the first half of the string
        if (str[i] != str[len - i - 1]) { // if the first and last characters are not equal
            return false; // the string is not a palindrome
        }
    }
    return true; // if the loop completes without finding non-matching characters, the string is a palindrome
}
