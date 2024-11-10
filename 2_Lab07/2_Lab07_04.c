#include <stdio.h>

int main() {
	int n, m;
	int A[1000], B[1000];
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < m; i++) {
	scanf("%d", &B[i]);
	}

	int i=0, j;
	for (int j = 0; j < m; j++) {
		if (A[i] >= B[j])
			A[i] -= B[j];
		else if (A[i + 2] >= B[j]) {
			A[i + 2] -= B[j];
			i++;
		}
		else {
			A[i + 1] -= B[j];
			i++;
		}
	}

	int sum=0;
	for (i = 0; i < n; i++) {
		sum += A[i];
	}

	printf("%d", sum);
	return 0;
}