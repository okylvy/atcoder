#include <iostream>
using namespace std;

int main() {
    string x;
    cin >> x;

    size_t found = x.find(".");
    if (found != string::npos) {
        x.erase(x.begin() + found, x.end());
    }
    cout << x;
}