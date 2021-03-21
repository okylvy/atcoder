#include <iostream>
using namespace std;

int main() {
    int n, y;
    cin >> n >> y;

    for (int i=0; i<=n; i++) {
        for (int j=0; j<=(n-i); j++) {
            if ((i*9000 + j*4000 + n*1000) == y) {
                cout << i << " " << j << " " << n-i-j;
                return 0;
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1;
}