#include <iostream>
#include <string>
using namespace std;

int main() {
    // set ana rray with 10 elements and get 10 elements from user
    double numbers[10]={ 0 };
    int i = 0;
    for (i; i < 10; ++i) {
        cout << "Enter a real number: “
        cin >> numbers[i];
    }
    cout << '\n';

    // Find the smallest value and its index
    double smallest = numbers[0];
    int smallestIndex = 0;
    for (int i = 1; i < 10; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
            smallestIndex = i;
        }
    }

    // Find the largest value and its index
    double largest = numbers[0];
    int largestIndex = 0;
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
            largestIndex = i;
        }
    }

    // Calculate the average
    double sum = 0.0;
    for (int i = 0; i < 10; i++) {
        sum += numbers[i];
    }
    double average = sum / 10;

    // Output
    cout << "Smallest value: " << smallest << ", Index: " << smallestIndex << endl;
    cout << "Largest value: " << largest << ", Index: " << largestIndex << endl;
    cout << "Average value: " << average << endl;
    return 0;
}

