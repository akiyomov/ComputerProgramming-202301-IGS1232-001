#include <iostream>
using namespace std;

const double PI = 3.141592;

int main() {
    double radius, area, circumference;
    cout << "Enter the radius: ";
    cin >> radius;
    area = PI * radius * radius;
    circumference = 2.0 * PI * radius;
    cout << "radius = " << radius << endl;
    cout << "circle area = " << area << ", circumference = " << circumference << endl;
    return 0;
}

