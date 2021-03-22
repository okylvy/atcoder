#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int opt=0;
    for (int i=0; i != 3; i++) {
        if (s.at(i) == 'o')
            opt++;
    }
    cout << 700 + 100*opt;
}