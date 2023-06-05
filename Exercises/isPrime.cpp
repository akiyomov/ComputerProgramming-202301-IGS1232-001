#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
bool isPrime(int a);

int main() {
    cout << isPrime(17);
    return 0;
}

bool isPrime(int a) {
    for (int i = 2; i < a / 2; ++i)
        if (a % i == 0)
            return false;
    return true;
}