#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    cout << "Input hours: ";
    cin >> h;
    cout << "Input minutes: ";
    cin >> m;
    cout << "Input seconds: ";
    cin >> s;
    cout << "Total seconds: " << h * 60 * 60 + m*60+s << endl;
    cout << "Total minutes: " << h * 60+ m + s/60.0f;
    return 0;

}
