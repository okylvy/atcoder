#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> m(n);
    for (int i=0; i != n; i++) {
        cin >> m.at(i);
    }

    int sum_all=0;
    for (int i=0; i != n; i++) {
        sum_all += m.at(i);
    }
    int ans=n;
    ans += (x - sum_all)/(*min_element(m.begin(), m.end()));
    cout << ans;
}