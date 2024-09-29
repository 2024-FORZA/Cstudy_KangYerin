#include <stdio.h>
#include <string.h>

int main() {
    char p[101];
    int k, isPrime, num, key = 1000001;
	scanf("%s %d", &p, &k);
    for (int i = 2; i <= k; i++) {
        isPrime = 1;
        for (int j = 2; j * j <= i; j++) 
            if (i % j == 0) {
                isPrime = 0; break; }
        if (!isPrime) 
            continue;
        num = 0;
        for (int j = 0; j < strlen(p); j++)
            num = (num * 10 + p[j] - '0') % i;
        if (!num) 
        { key = i; break; }
    }
    if (key < k)
        printf("BAD %d", key);
    else 
        printf("GOOD");

    return 0;
}