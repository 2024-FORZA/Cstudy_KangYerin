//11653
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	
	for (int i = 2; i <= N;) {
		if (N % i == 0) {
			N = N / i;
			printf("%d\n", i);
		}
		else {
			i += 1;
		}
	}

	return 0;
}