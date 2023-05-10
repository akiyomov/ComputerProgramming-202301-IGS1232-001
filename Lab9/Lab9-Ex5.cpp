#include <iostream>

using namespace std;

// The exam function takes three double values by reference and returns the average of the three.
// It also modifies n1 and n2 to store the minimum and maximum values respectively.
double exam(double& n1, double& n2, double& n3) {
    double sum = n1 + n2 + n3;
    double avg = sum / 3;

    n1 = min(n1, min(n2, n3)); // find the minimum value among the three and store it in n1
    n2 = max(n1, max(n2, n3)); // find the maximum value among the three and store it in n2
    n3 = sum;
    return avg; // return the average of the three values
}

int main(void) {
    double n1 = 10.3, n2 = -22.0, n3 = 77.7, avg = 0.0;

    // Print the input arguments
    cout << "Arguments: " << n1 << " " << n2 << " " << n3 << endl;

    // Compute the average of the three values and modify n1 and n2
    avg = exam(n1, n2, n3);

    // Print the results
    cout << "Minimum value: " << n1 << endl;
    cout << "Maximum value: " << n2 << endl;
    cout << "Sum of the values: " << n3 << endl;
    cout << "Average value: " << avg << endl;

    return 0;
}
