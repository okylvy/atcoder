#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i=0; i != n; i++) {
        cin >> vec.at(i);
    }
    int cnt = 0, prev = 0;
    for (int i=0; i != n; i++) {
        decltype(vec)::iterator max_val = max_element(vec.begin(), vec.end());
        if (prev == 0 || prev > *max_val) {
            cnt++;
        }
        prev = *max_val;
        vec.erase(max_val);
    }
    cout << cnt;
}