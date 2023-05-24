#include<iostream>
#define ASCENDING (0)
#define DESCENDING (1)

using namespace std;
const int SIZE = 10;

// Function to print the elements of an array
void print_array(double data[SIZE], int SIZE);

// Function to perform selection sort on an array
void selection_sort(double list[], int n);

// Function to sort an array in ascending or descending order
void mySort(double data[], double sorted[], int SIZE, int a = ASCENDING);

int main() {
    double data[SIZE] = { 0 };
    double sorted[SIZE] = { 0 };
    int i;

    // Reading input from the user
    for (i = 0; i < SIZE; ++i) {
        cout << "Enter a real number: ";
        cin >> data[i];
    }

    cout << "== Input numbers ==" << endl;
    print_array(data, SIZE);

    cout << "== Ascending order ==" << endl;
    mySort(data, sorted, SIZE);
    print_array(sorted, SIZE);

    cout << "== Descending order ==" << endl;
    mySort(data, sorted, SIZE, DESCENDING);
    print_array(sorted, SIZE);

    return 0;
}

void mySort(double data[], double sorted[], int SIZE, int a) {
    selection_sort(data, SIZE);

    // Sorting in descending order
    if (a == DESCENDING) {
        for (int i = SIZE - 1; i >= 0; --i)
            sorted[SIZE - 1 - i] = data[i];
    }
        // Sorting in ascending order (default)
    else {
        for (int i = 0; i < SIZE; ++i)
            sorted[i] = data[i];
    }
}

// Function to print the elements of an array
void print_array(double data[SIZE], int SIZE) {
    for (int i = 0; i < SIZE; ++i)
        cout << data[i] << " ";
    cout << endl;
}

// Function to perform selection sort on an array
void selection_sort(double list[], int n) {
    int i, j, least;
    double temp;

    // Repeat n-1 times
    // because the last number is automatically sorted
    for (i = 0; i < n - 1; i++) {
        least = i;

        // Search for the minimum value
        for (j = i + 1; j < n; j++)
            if (list[j] < list[least])
                least = j;

        // Swap the minimum value with list[i]
        if (least != i) {
            temp = list[i];
            list[i] = list[least];
            list[least] = temp;
        }
    }
}

