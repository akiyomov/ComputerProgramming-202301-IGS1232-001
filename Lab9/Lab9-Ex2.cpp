#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int NUM_THROWS = 1000000;
    int rolls[6] = { 0 };

    // Seed the random number generator
    srand(time(nullptr));

    // Simulate dice throws and count the number of times each side is rolled
    for (int i = 0; i < NUM_THROWS; ++i) {
        int roll = rand() % 6 + 1;
        ++rolls[roll - 1];
    }

    // Print the results
    for (int i = 0; i < 6; ++i) {
        cout << i + 1 << ":" << rolls[i] << ",";
        cout << static_cast<double>(rolls[i]) / NUM_THROWS * 100 << "%" << endl;
    }

    return 0;
}

