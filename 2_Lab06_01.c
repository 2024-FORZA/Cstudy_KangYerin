#include <stdio.h>

int main() {
	int n;
	int count = 0;
	int x[100];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", x+i);
		if (x[i] == 2) {
			count++;
			continue;
		}
		if (x[i] % 2 == 0 || x[i]==1)
			continue;
		for (int j = 3; j <= x[i]/2; j+=2) {
			if (x[i] % j == 0 )
				goto OUT;
		}
		count++;
		OUT:;
	}

	printf("%d", count);
	return 0;
}