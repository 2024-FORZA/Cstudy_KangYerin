//1037
#include <stdio.h>

int main() {
	int x, i, a[50];
	scanf("%d", &x);

	for (i = 0; i < x; i++) {
		scanf("%d", &a[i]);
	}

	int max=2, min=1000000;
	for (i = 0; i < x; i++) {
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
	}

	int N = max * min;
	printf("%d", N);

	return 0;
}