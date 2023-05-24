#include <iostream>
#define SIZE (10)

using namespace std;

// Function prototypes
double square_arr(double num[SIZE]);
double sum_arr(double num[]);
double sum_xy(double x[], double y[]);
double get_b(double x[], double y[]);
double get_a(double x[], double y[], double b);


int main() {
    // Data points
    double x[10]{ 3.0,4.5,5.5,6.5,7.5,8.5,8.0,9.0,9.5,10.0 },
            y[10]{ 1.5,2.0,3.5,5.0,6.0,7.5,9.0,10.5,12.0,14.0 };

    // Calculate and print the linear regression equation
    cout << "y = " << get_a(x, y, get_b(x, y)) << " + " << get_b(x,y)<<"x";

    return 0;
}

// Calculate the 'a' coefficient in the linear equation y = ax + b
double get_a(double x[], double y[], double b) {
    double a = sum_arr(y) / SIZE - b * sum_arr(x) / SIZE;
    return a;
}

// Calculate the 'b' coefficient in the linear equation y = ax + b
double get_b(double x[], double y[]) {
    double b = 0.0;
    b = (SIZE*sum_xy(x, y) - sum_arr(x) * sum_arr(y)) / (SIZE*square_arr(x) - sum_arr(x) * sum_arr(x));
    return b;
}

// Calculate the sum of the product of x and y values
double sum_xy(double x[], double y[]) {
    double xy = 0.0;
    for (int i = 0; i < SIZE; ++i)
        xy += x[i] * y[i];
    return xy;
}

// Calculate the sum of values in an array
double sum_arr(double num[]) {
    double sum = 0.0;
    for (int i = 0; i < SIZE; ++i) {
        sum += num[i];
    }
    return sum;
}

// Calculate the sum of squared values in an array
double square_arr(double num[SIZE]) {
    double sum = 0.0;
    for (int i = 0; i < SIZE; ++i) {
        sum += num[i]*num[i];
    }
    return sum;
}
