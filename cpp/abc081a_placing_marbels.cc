#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    char str[3];
    int cnt = 0;

    cin >> str;

    for (int i=0; i<3; i++) {
        if ('1' == str[i]) {
            cnt++;
        }
    }
    cout << cnt;
}