//10807
#include <stdio.h>

int main() {

	int i, n, v, k=0;
	int x[100] = { 0, };

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}

	scanf("%d", &v);

	for (i = 0; i < n; i++) {
		if (x[i] == v)
			++k;
	}

	printf("%d", k);

	return 0;
}