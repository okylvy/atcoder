#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s;
    size_t len_s = s.length();

    string a = "dream";
    string b = "eraser";
    string c = "erase";
    string d = "er";
    string e = "r";
    size_t len_a = a.length();
    size_t len_b = b.length();
    size_t len_c = c.length();
    size_t len_d = d.length();
    size_t len_e = e.length();

    size_t pos = 0;
    while (true) {
        if (s.compare(pos, len_a, a) == 0){
            pos += len_a;
            if (s.compare(pos, len_b, b) == 0) {
                pos += len_b;
            } else if (s.compare(pos, len_c, c) == 0) {
                pos += len_c;
            } else if (s.compare(pos, len_d, d) == 0) {
                pos += len_d;
            }
        } else if (s.compare(pos, len_c, c) == 0){
            pos += len_c;
            if (s.compare(pos, len_e, e) == 0) {
                pos += len_e;
            } 
        } else {
            cout << "NO";
            break;
        }
        if (len_s == pos) {
            cout << "YES";
            break;
        }
    }
}