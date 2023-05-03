#include <iostream>
using namespace std;

int bigIndex(int,int,int);

int main() {
    int n1, n2, n3;
    cout << "Input three integers: ";
    cin >> n1 >> n2 >> n3;
    int idx = bigIndex(n1, n2, n3);

    cout << "Index of the largest: " << idx;
    return 0;
}

int bigIndex(int a, int b, int c) {
    if (a > b && a > c) {
        return 0;
    }
    else if(b > a && b > c) {
        return 1;
    }
    return 2;
}
