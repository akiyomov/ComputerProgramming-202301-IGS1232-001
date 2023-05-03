#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char shape;
    double width, height, base, radius, area;

    cout << "Select a shape (r: rectangle, t: triangle, c: circle): ";
    cin >> shape;

    switch (shape) {
        case 'r':
            cout << "==Area calculation (rectangle)==\n";
            cout << "- Input width: ";
            cin >> width;
            cout << "- Input height: ";
            cin >> height;
            area = width * height;
            cout << "- Area: " << area << endl;
            break;

        case 't':
            cout << "==Area calculation (triangle)==\n";
            cout << "- Input base: ";
            cin >> base;
            cout << "- Input height: ";
            cin >> height;
            area = 0.5 * base * height;
            cout << "- Area: " << area << endl;
            break;

        case 'c':
            cout << "==Area calculation (circle)==\n";
            cout << "- Input radius: ";
            cin >> radius;
            area = 3.14159 * pow(radius, 2);
            cout << "- Area: " << area << endl;
            break;

        default:
            cout << "Invalid selection... Try again...\n";
            break;
    }

    cout << "==End of the program==\n";

    return 0;
}
