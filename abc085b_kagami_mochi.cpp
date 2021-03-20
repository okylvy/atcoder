#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i != n; i++) {
        cin >> v.at(i);
    }
    int cnt = 0, prev = 0;
    for (int i=0; i != n; i++) {
        decltype(v)::iterator max_val = max_element(v.begin(), v.end());
        if (prev == 0 || prev > *max_val) {
            cnt++;
        }
        prev = *max_val;
        v.erase(max_val);
    }
    cout << cnt;
}