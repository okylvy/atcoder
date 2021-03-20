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
    int alice=0, bob=0;
    bool turn=true;
    for (int i=0; i != n; i++) {
        decltype(v)::iterator max_val = max_element(v.begin(), v.end());
        if (turn) {
            alice += *max_val;
        } else {
            bob += *max_val;
        }
        v.erase(max_val);
        turn = !turn;
    }
    cout << alice - bob;
}