#include<iostream>
#include<vector>
using namespace std;

int main() {
    int i, num, a, cnt = 0;
    cin >> num;
    vector<int> input(num);
    for (i=0; i<num; i++) {
        cin >> input[i];
    }
    bool flag = true;
    while(true) {
        for (int i=0; i<num; i++) {
            if (input[i] % 2 != 0) {
                flag = false;
            }
        }
        if (flag == false)
            break;
        else
            cnt++;
    }

    cout << cnt;
}