#include <iostream>
using namespace std;

void drawRectangle(int w, int l, char pattern);

int main() {
    int w, l;
    char pattern;
    cout << "Enter width and length of the rectangle:";
    cin >> w >> l;
    cout << "Width:" << w << endl;
    cout << "Length:" << l << endl;
    cout << "Enter a charactor for the border pattern of the rectangle:";
    cin >> pattern;
    drawRectangle(w, l, pattern);
    return 0;
}

void drawRectangle(int w, int l, char pattern) {
    for (int i = 1; i <= l; i++) {
        if (i == 1 || i == l) {
            for (int j = 1; j <= w; j++) {
                cout << pattern;

            }
            cout << endl;
        }
        else {
            cout << pattern;
            for (int z = 1; z <= w - 2;z++) {
                cout << " ";
            }
            cout << pattern;
            cout << endl;

        }
    }
}

