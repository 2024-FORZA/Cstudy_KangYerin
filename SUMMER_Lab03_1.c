#include <stdio.h>

int main() {
	int T;
	int C;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int Q = 0, D = 0, N = 0, P = 0;

		scanf("%d", &C);

		while (C - 25 >= 0) {
			C = C - 25;
			Q++;
		}
		while (C - 10 >= 0) {
			C = C - 10;
			D++;
		}
		while (C - 5 >= 0) {
			C = C - 5;
			N++;
		}
		while (C - 1 >= 0) {
			C = C - 1;
			P++;
		}
		printf("%d %d %d %d\n", Q, D, N, P);
	}
	return 0;
}