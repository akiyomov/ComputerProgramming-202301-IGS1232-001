#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIZE = 20;

// Function to fill the array with random values
void fillArray(int array[][SIZE]);

// Function to display the array
void showArray(const int array[][SIZE]);

// Function to calculate the sum of a row
int rowSum(const int array[][SIZE], int row);

// Function to calculate the sum of a column
int colSum(const int array[][SIZE], int col);

// Function to calculate the sum of the main diagonal
int diagonalSum(const int array[][SIZE]);

// Function to calculate the sum of the backward diagonal
int backwardDiagonalSum(const int array[][SIZE]);

// Function to find the maximum value in a row
int rowMax(const int array[][SIZE], int row);

// Function to find the maximum value in a column
int colMax(const int array[][SIZE], int col);

// Function to find the row with the largest sum
int maxRow(const int array[][SIZE]);

// Function to find the column with the largest sum
int maxCol(const int array[][SIZE]);

int main() {
    int array[SIZE][SIZE];

    // Seed the random number generator
    srand(time(0));

    // Fill the array with random values
    fillArray(array);

    // Display the array
    showArray(array);

    // Calculate and display the sum of the main diagonal
    int diagonalSumResult = diagonalSum(array);
    cout << "Sum of the main diagonal: " << diagonalSumResult << endl;

    // Calculate and display the sum of the backward diagonal
    int backwardDiagonalSumResult = backwardDiagonalSum(array);
    cout << "Sum of the backward diagonal: " << backwardDiagonalSumResult << endl;

    // Get a row number from the user
    int row;
    cout << "Enter the row number (0-" << SIZE - 1 << "): ";
    cin >> row;

    // Calculate and display the maximum value in the row
    int rowMaxResult = rowMax(array, row);
    cout << "Maximum value in row " << row << ": " << rowMaxResult << endl;

    // Get a column number from the user
    int col;
    cout << "Enter the column number (0-" << SIZE - 1 << "): ";
    cin >> col;

    // Calculate and display the maximum value in the column
    int colMaxResult = colMax(array, col);
    cout << "Maximum value in column " << col << ": " << colMaxResult << endl;

    // Find and display the row with the largest sum
    int maxRowResult = maxRow(array);
    cout << "Row with the largest sum: " << maxRowResult << endl;

    // Find and display the column with the largest sum
    int maxColResult = maxCol(array);
    cout << "Column with the largest sum: " << maxColResult << endl;

    return 0;
}

void fillArray(int array[][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            array[i][j] = rand() % 100;
        }
    }
}

void showArray(const int array[][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int rowSum(const int array[][SIZE], int row) {
    int sum = 0;
    for (int j = 0; j < SIZE; ++j) {
        sum += array[row][j];
    }
    return sum;
}

int colSum(const int array[][SIZE], int col) {
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += array[i][col];
    }
    return sum;
}

int diagonalSum(const int array[][SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += array[i][i];
    }
    return sum;
}

int backwardDiagonalSum(const int array[][SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += array[i][SIZE - 1 - i];
    }
    return sum;
}

int rowMax(const int array[][SIZE], int row) {
    int maxVal = array[row][0];
    for (int j = 1; j < SIZE; ++j) {
        if (array[row][j] > maxVal) {
            maxVal = array[row][j];
        }
    }
    return maxVal;
}

int colMax(const int array[][SIZE], int col) {
    int maxVal = array[0][col];
    for (int i = 1; i < SIZE; ++i) {
        if (array[i][col] > maxVal) {
            maxVal = array[i][col];
        }
    }
    return maxVal;
}

int maxRow(const int array[][SIZE]) {
    int maxSum = rowSum(array, 0);
    int maxRow = 0;
    for (int i = 1; i < SIZE; ++i) {
        int sum = rowSum(array, i);
        if (sum > maxSum) {
            maxSum = sum;
            maxRow = i;
        }
    }
    return maxRow;
}

int maxCol(const int array[][SIZE]) {
    int maxSum = colSum(array, 0);
    int maxCol = 0;
    for (int j = 1; j < SIZE; ++j) {
        int sum = colSum(array, j);
        if (sum > maxSum) {
            maxSum = sum;
            maxCol = j;
        }
    }
    return maxCol;
}
