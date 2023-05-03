#include <iostream>

using namespace std;

int main()
{
    int n, i, j, space = 1;
    cout << "Program output of exercise #3===>" << '\n';
    // loop until the user enters a positive odd number
    do
    {
        cout << "Enter number of rows of the diamond : ";
        cin >> n;
        cout << " - Input # of rows : " << n << '\n';
        if (n <= 0 || n % 2 == 0)
            cout << "The row should be positive odd number. try again ..." << endl;
    } while (n <= 0 || n % 2 == 0);

    space = n - 1;

    // loop for upper half of the diamond
    for (j = 1; j <= n; j++)
    {
        // print spaces before the alphabet letters to create diamond shape
        for (i = 1; i <= space; i++)
            cout << " ";
        space--;

        // print alphabet letters with one space in between them
        for (i = 1; i <= 2 * j - 1; i++)
        {
            if (i % 2 == 1) // print the letter
                cout << char(64 + j);
            else // print a space
                cout << " ";
        }

        cout << endl; // move to next line after each row is printed
    }

    space = 1;

    // loop for lower half of the diamond
    for (j = 1; j <= n - 1; j++)
    {
        // print spaces before the alphabet letters to create diamond shape
        for (i = 1; i <= space; i++)
            cout << " ";
        space++;

        // print alphabet letters with one space in between them
        for (i = 1; i <= 2 * (n - j) - 1; i++)
        {
            if (i % 2 == 1) // print the letter
                cout << char(64 + n - j);
            else // print a space
                cout << " ";
        }

        cout << endl; // move to next line after each row is printed
    }
    cout << "\n<===End of the program output";

    return 0;
}
