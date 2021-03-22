#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i != n; i++) {
        cin >> a.at(i);
    }

    int max;
    sort(a.begin(), a.end());
    if (n == 2) {
        cout << a.at(1) << " " << a.at(0);
        return 0;
    }

    max = a.at(n-1);
    int ans, cur, prev = abs((max - a.at(0)) - a.at(0));
    for (int i=1; i != n-1; i++) {
        cur = abs((max - a.at(i)) - a.at(i));
        if (cur < prev) {
            prev = cur;
            ans = a.at(i);
        }
    }
    cout << max << " " << ans;
}