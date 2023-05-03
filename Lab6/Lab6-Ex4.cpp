#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many real numbers to input: ";
    cin >> n;

    double smallest, largest, num;
    int smallest_pos, largest_pos;

    for (int i = 1; i <= n; i++) {
        cout << "Input a real number: ";
        cin >> num;
        if (i == 1) {
            smallest = num;
            largest = num;
            smallest_pos = i;
            largest_pos = i;
        }
        else {
            if (num < smallest) {
                smallest = num;
                smallest_pos = i;
            }
            if (num > largest) {
                largest = num;
                largest_pos = i;
            }
        }
    }
    cout << endl;
    cout << "Among " << n << " inputs," << endl;
    cout << smallest << " is the smallest real value and it was the " << smallest_pos << "th input." << endl;
    cout << largest << " is the largest real value and it was the " << largest_pos << "th input." << endl;

    return 0;
}

