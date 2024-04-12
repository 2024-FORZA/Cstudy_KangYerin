//2439

#include <stdio.h>

int main() {
	int x, y, i, n;
	x = 0;
	i = 0;
	scanf("%d", &n);
	while (i < n) {
		y = 0;
		while (y < n - i-1) {
			printf(" ");
			y++;
		}
		while (x < n-y) {
			printf("*");
			x++;
		}
		printf("\n");
		x = 0;
		i++;
	}
		return 0;
}