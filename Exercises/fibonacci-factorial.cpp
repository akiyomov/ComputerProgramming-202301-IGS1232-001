#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
long long factorial(long long a);

int main() {
    int fib[20]{};
    fib[0] = 0;
    fib[1] = 1;
    int j = 0;
    for (int i = 2; i < 20; ++i) {
        fib[i] = fib[i - 2] + fib[i - 1];

    }

    for (int i = 0; i < 20; ++i) {
        cout << fib[i] << endl;
    }
    std::cout << factorial(20);


}
long long factorial( long long a) {
    if (a == 1)
        return 1;
    return a * factorial(a - 1);
}


