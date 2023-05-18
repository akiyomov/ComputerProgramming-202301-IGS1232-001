#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ARRAY_SIZE = 3;
const int NUM_PROBLEMS = 9;

// Function to generate random numbers for an array
void generateRandomNumbers(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 101; // Generate random numbers between 0 and 100
    }
}

// Function to generate a random operator (0 for addition, 1 for subtraction)
int generateRandomOperator() {
    return rand() % 2;
}

int main() {
    srand(time(0)); // Seed the random number generator

    int firstArray[ARRAY_SIZE];
    int secondArray[ARRAY_SIZE];
    int correctCount = 0;
    int incorrectCount = 0;

    generateRandomNumbers(firstArray, ARRAY_SIZE);
    generateRandomNumbers(secondArray, ARRAY_SIZE);

    for (int i = 0; i < NUM_PROBLEMS; i++) {
        int firstNumber = firstArray[i / ARRAY_SIZE];
        int secondNumber = secondArray[i % ARRAY_SIZE];
        int operatorType = generateRandomOperator();
        int result;

        cout << "Problem " << (i + 1) << ": ";

        if (operatorType == 0) {
            cout << firstNumber << " + " << secondNumber << " = ";
            result = firstNumber + secondNumber;
        }
        else {
            cout << firstNumber << " - " << secondNumber << " = ";
            result = firstNumber - secondNumber;
        }

        int userAnswer;
        cin >> userAnswer;

        if (userAnswer == result) {
            cout << "Correct!!!!" << endl;
            correctCount++;
        }
        else {
            cout << "Incorrect.." << endl;
            incorrectCount++;
        }
    }

    cout << "Total # of math questions: " << NUM_PROBLEMS << endl;
    cout << "# of correct answers: " << correctCount << endl;
    cout << "# of incorrect answers: " << incorrectCount << endl;
    cout << "Random numbers in the first array: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << firstArray[i] << " ";
    }
    cout << endl;

    return 0;
}

