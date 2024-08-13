#include <stdio.h>

int main() {
	int T;
	int N, M;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &N, &M);

		if (N > M/2) {
			N = M - N;
		}

		long long result=1;
		for (int j = M; j > M - N; j--) {
			result *= j;
		}
		for (int j = N; j > 1; j--) {
			result /= j;
		}

		printf("%lld\n", result);
	}
	
	return 0;
}