#include <stdio.h>

int main() {
	int m, n;
	int sum=0, min=0;
	scanf("%d", &m);
	scanf("%d", &n);

	for (int i = m; i <= n; i++) {
		if (i == 2) {
			sum += i;
			min = 2;
		}
		for (int j = 2; j < i; j++) {
			if (i % j == 0)
				break;
			if (j == i-1) {
				sum += i;
				if (min == 0)
					min = i;
			}
		}
	}
	if (min == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, min);
	return 0;
}

	
