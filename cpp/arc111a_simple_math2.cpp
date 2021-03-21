#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    // TODO: Modify for the fail case of huge number like, 1000000000000000000 9997
    cout << fmod((floor(pow(10, n)/m)), m);
}