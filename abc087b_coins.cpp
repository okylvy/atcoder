#include <iostream>
using namespace std;

int main() {
    int a, b, c, x;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> x;

    int cnt = 0;

    for (int i=0; i != a+1; i++) {
        for (int j=0; j != b+1; j++) {
            for (int k=0; k != c+1; k++) {
                if (i*500 + j*100 + k*50 == x) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
}