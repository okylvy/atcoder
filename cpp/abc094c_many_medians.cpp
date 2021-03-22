#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i=0; i != n; i++) {
        cin >> x.at(i);
    }

    decltype(x) org = x;
    sort(x.begin(), x.end());
    int left=x.at(n/2 - 1);
    int right=x.at(n/2);
    for (int i=0; i != n; i++) {
        if (org.at(i) <= left) {
            cout << right << endl;
        } else {
            cout << left << endl;
        }
    }
}