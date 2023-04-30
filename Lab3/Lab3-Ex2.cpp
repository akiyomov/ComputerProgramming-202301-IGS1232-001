#include <iostream>
using namespace std;

int main() {
    float c,f;
    cout << "Input a temperature (in Celsius): ";
    cin >> c;
    cout << (c * 9 / 5) + 32 << " degrees Fahrenheit.\n";

    cout << "Input a temperature (in Fahrenheit): ";
    cin >> f;
    cout << (f - 32) *5/9 << " degrees Celcius.\n";

    return 0;

}

