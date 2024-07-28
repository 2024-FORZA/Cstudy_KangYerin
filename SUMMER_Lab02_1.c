//1546
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	int max = 0;
	int score[1000];
	for (int i = 0; i < N; i++) {
		scanf("%d", &score[i]);
		if (score[i] - max > 0) {
			max = score[i];
		}
	}

	double sum = 0;
	for (int i = 0; i < N; i++) {
		sum = sum + (double) score[i] / max * 100 ;
	}
	printf("%f", sum / N);

	return 0;
}