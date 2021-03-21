#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long s, p;
    cin >> s >> p;

    int p_max = 1000500;
    for (int i=0; i != p_max; i++) {
        if (i*(s-i) == p) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}