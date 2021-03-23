#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int cnt=0;
    for (int i=1; i != a+1; i++) {
        if (b >= i) {
            cnt++;
        }
    }
    cout << cnt;   
}
