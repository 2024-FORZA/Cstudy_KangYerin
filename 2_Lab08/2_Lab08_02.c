#include <stdio.h>

int main() {
	int s1, s2, s3;
	int sum[81] = { 0, };
	scanf("%d %d %d", &s1, &s2, &s3);

	for (int i = 1; i <= s1; i++) {
		for (int j = 1; j <= s2; j++) {
			for (int k = 1; k <= s3; k++) {
				sum[i + j + k]++;
			}
		}
	}

	int max_count = 0, max_sum = 0;
	for (int i = 0; i < 81; i++) {
		if (sum[i] > max_count) {
			max_count = sum[i];
			max_sum = i;
		}
	}

	printf("%d", max_sum);
	return 0;
}