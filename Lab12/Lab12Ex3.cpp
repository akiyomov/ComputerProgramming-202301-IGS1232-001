Exercise 3
#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

struct Circle {
    Point center;
    double radius;
};

typedef bool TorF;

// Function declaration for TorFisInside()
TorF isInside(Circle, Point);

int main() {
    // Define points p1 and p2
    // Point = {x, y}
    Point p1 = { 0, 0 }, p2 = { 9.5, 9.5 };

    // Define circle c1
    // Circle = {center {x, y}, radius}
    Circle c1 = { {2.5, 2.5}, 4.5 };

    // Check if p1 is inside or on the boundary of c1
    if (isInside(c1, p1)) {
        cout << "Point p1 is located inside or on the boundary of the circle." << endl;
    }
    else {
        cout << "Point p1 is outside the circle." << endl;
    }

    // Check if p2 is inside or on the boundary of c1
    if (isInside(c1, p2)) {
        cout << "Point p2 is located inside or on the boundary of the circle." << endl;
    }
    else {
        cout << "Point p2 is outside the circle." << endl;
    }

    return 0;
}

TorF isInside(Circle circle, Point point) {
    double distance = sqrt(pow(point.x - circle.center.x, 2) + pow(point.y - circle.center.y, 2));
    if (distance < circle.radius) {
        return true;  // Point is inside the circle
    }
    else if (distance == circle.radius) {
        return true;  // Point is on the border of the circle
    }
    else {
        return false;  // Point is outside the circle
    }
}
