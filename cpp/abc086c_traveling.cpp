#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    int tt, xx, yy;
    vector<int> t, x, y;
    cin >> n;
    for (int i=0; i!=n; i++) {
        cin >> tt >> xx >> yy;
        t.push_back(tt);
        x.push_back(xx);
        y.push_back(yy);
    }

    int time=0;
    int dist;
    for  (int i=0; i!=n; i++) {
        if (i==0) {
            time = t.at(i);
            dist = x.at(i) + y.at(i);
        } else {
            time = t.at(i) - t.at(i-1);
            dist = abs(x.at(i) - x.at(i-1)) + abs(y.at(i) - y.at(i-1));
        }
        if ((time - dist) >= 0 && (time - dist) % 2 == 0) {
            continue;
        } else {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}