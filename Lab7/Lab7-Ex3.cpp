#include <iostream>
using namespace std;
bool isEven(int);

int main() {
    int a;

    while (true) {
        cout << "Enter an even number: ";
        cin >> a;
        if (isEven(a)) {
            cout << "Good!!!!";
            break;
        }
        cout << "Try again please..." << endl;
    }
}

bool isEven(int i) {
    if (i % 2 != 0) {
        return false;
    }
    return true;
}

