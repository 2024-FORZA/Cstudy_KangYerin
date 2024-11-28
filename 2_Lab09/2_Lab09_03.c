#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char n[10];
    scanf("%s", n);
    while (1) {
        int c = 0;
        for (int i = 0; i < strlen(n); i++) {
            if (n[i] != '4' && n[i] != '7') {
                c = 1;
                break;
            }
        }
        if (c == 0) break;
        else sprintf(n, "%d", atoi(n) - 1);
    }
    printf("%s", n);
    return 0;
}