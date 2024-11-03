#include <stdio.h>

int main() {
    int x, y, w, h;
    int l1, l2;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    if (x <= w - x)
        l1 = x;
    else
        l1 = w - x;

    if (y <= h - y)
        l2 = y;
    else
        l2 = h - y;

    if (l1 <= l2)
        printf("%d", l1);
    else
        printf("%d", l2);

    return 0;
}