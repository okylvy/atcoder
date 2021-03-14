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
    int alice=0, bob=0;
    bool turn=true;
    for (int i=0; i != n; i++) {
        decltype(a)::iterator max_val = max_element(a.begin(), a.end());
        if (turn) {
            alice += *max_val;
        } else {
            bob += *max_val;
        }
        a.erase(max_val);
        turn = !turn;
    }
    cout << alice - bob;
}