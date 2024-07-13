//1247
#include <stdio.h>

int main() {

	for (int j = 0; j < 3; j++) {
		int N;
		long long S = 0, x[100000]; 
		scanf("%d", &N);

		int overflow = 0;
		for (int i = 0; i < N; i++) {
			scanf("%lld", &x[i]);
			if (S > 0 && x[i] > 0 && x[i] > 9223372036854775807 - S) {
				overflow += 1;
			}
			else if (S < 0 && x[i] < 0 && x[i] < -9223372036854775808 - S) {
				overflow -= 1;
			}
			S += x[i];
		}

		if (overflow > 0) {
			printf("+\n");
		}
		else if (overflow < 0) {
			printf("-\n");
		}
		else if (S == 0) {
			printf("0\n");
		}
		else if (S > 0) {
			printf("+\n");
		}
		else if (S < 0) {
			printf("-\n");
		}
	}
	return 0;
}