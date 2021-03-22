#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> a(m);
    for (int i=0; i != m; i++) {
        cin >> a.at(i);
    }

    int left=0;
    int right=0;
    for (int i=1; i != x; i++) {
        if (find(a.begin(), a.end(), i) != a.end()) {
            left++;
        }
    }
    for (int i=x+1; i != n; i++) {
        if (find(a.begin(), a.end(), i) != a.end()) {
            right++;
        }
    }

    if (left <= right) {
        cout << left;
    } else {
        cout <<right;
    }
}