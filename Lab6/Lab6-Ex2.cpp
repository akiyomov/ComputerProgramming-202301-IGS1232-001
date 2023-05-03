#include <iostream>

using namespace std;

int main() {
    int menuSelection = 0; // initialize menu selection variable to 0

    do { // repeat menu until user selects option 5 (Exit Program)
        cout << "-INHABankProgram-" << endl;
        cout << "-------Menu--------" << endl;
        cout << "1. Make Account" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdrawal" << endl;
        cout << "4. Display All" << endl;
        cout << "5. Exit Program" << endl;
        cout << "Select menu: ";
        cin >> menuSelection; // read in user input for menu selection

        switch (menuSelection) { // switch statement based on the user's menu selection
            case 1: // if user selects Make Account
                cout << "Bank account creation completed" << endl;
                break;
            case 2: // if user selects Deposit
                cout << "Deposit completed" << endl;
                break;
            case 3: // if user selects Withdrawal
                cout << "Withdrawal completed" << endl;
                break;
            case 4: // if user selects Display All
                cout << "Listing all accounts..." << endl;
                break;
            case 5: // if user selects Exit Program
                cout << "Saving all the account info..." << endl;
                cout << "End of the program. Bye." << endl;
                break;
            default: // if user selects an invalid option
                cout << "Illegal selection. Try again..." << endl;
                break;
        }

        cout << endl; // print a new line after the menu
    } while (menuSelection != 5);

    return 0; // indicate successful program termination
}

