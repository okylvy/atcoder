#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    cin >> a;
    cin >> b;

    int ans = 0;
    for (int index=1; index != n+1; index++) {
        int dig, cnt=index, sum=0;
        do {
            dig = cnt % 10;
            sum += dig;
            cnt = cnt / 10;
        }
        while (cnt);
        if (sum >= a && sum <= b) {
            ans += index;
        }
    }
    cout << ans;
}