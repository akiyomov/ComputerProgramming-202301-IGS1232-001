#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    unsigned long x;
    time_t a = time(NULL);
    for (x = 0; x < 4200000000; ++x);
    time_t b = time(NULL);
    cout << "Time: " << int(b-a);
    return 0;
}