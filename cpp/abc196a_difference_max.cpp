#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, x, y;
    cin >> a >> b;
    cin >> c >> d;

    if (a >= b) {
        x = a;
    } else {
        x = b;
    }
    if (c >= 0 && d >= 0) {
        if (abs(c) > abs(d)) {
            y = d;
        } else {
            y = c;
        }
    } else if (c >= 0 && d < 0) {
        y = d;
    } else if (c < 0 && d >= 0) {
        y = c;
    } else {
        if (abs(c) > abs(d)) {
            y = c;
        } else {
            y = d;
        }
    }

    cout << x-y;
}