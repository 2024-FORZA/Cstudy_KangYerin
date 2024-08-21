//4539
#include <stdio.h>

int main() {
	int n, x;
	int i, j;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		if (x < 10) {
			printf("%d\n", x);
			continue;
		}
		for (j = 10; x / j > 0; j = j * 10) { 
			if (x % j >= 5 * j / 10) {
				x = x - x % j + j;
			}
			else {
				x = x - x % j ;
			}
		}
		printf("%d\n", x);
	}
}