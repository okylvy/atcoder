#include <iostream>
using namespace std;

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    int ans;
    if ((a/2)+(b/2) < c) {
        ans = (a*x) + (b*y);
    } else {
        int i, j;
        if (x < y) {
            i = (c*x*2) + (y-x)*b;
            j = c*y*2;
        } else {
            i = (c*y*2) + (x-y)*a;
            j = c*x*2;
        }
        if (i > j) {
            ans = j;
        } else {
            ans = i;
        }
    }
    cout << ans;
}