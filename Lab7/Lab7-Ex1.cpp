#include <iostream>
using namespace std;

int sum(int a, int b);

int main() {
    cout << "Sum, between 33 to 777: ";
    cout << sum(33, 777) << endl;
    cout << "Sum, between 1 to 100: ";
    cout << sum(1, 100) << endl;
    return 0;
}

int sum(int a, int b) {
    int i = a, all = 0;
    do {
        all += i;
        i++;
    } while (i <= b);

    return all;
};

