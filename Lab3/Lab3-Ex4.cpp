#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 2; i++) {
        float num1, num2, num3;
        cout << "Enter 3 floating point numbers: ";
        cin >> num1 >> num2 >> num3;
        cout << "You entered: " << num1 << ", " << num2 << ", " << num3 << endl;
        cout << "Sum: " << num1 + num2 + num3 << endl;
        cout << "Average: " << (num1 + num2 + num3) / 3 << endl;
    }
    return 0;
}
