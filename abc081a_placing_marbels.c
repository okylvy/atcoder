#include<stdio.h>

int main() {
    char str[3];
    int cnt = 0;

    scanf("%s", str);

    for (int i=0; i<3; i++) {
        if (str[i] == '1') {
            cnt++;
        }
    }
    
    printf("%d", cnt);
}