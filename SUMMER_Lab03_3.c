#include <stdio.h>

int main() {
	int N;
	int num[5];
	
	scanf("%d", &N);

	while (N != 0) {
		
		num[0] = N / 1000;
		num[1] = (N - num[0] * 1000) / 100;
		num[2] = (N - num[0] * 1000 - num[1] * 100) /10;
		num[3] = (N - num[0] * 1000 - num[1] * 100 - num[2] * 10);

		for (int i = 0; num[i]==0; i++) {
			num[i] = -1;
		}
		
		int sum = 1;
		for (int i = 0; i < 4; i++) {
			if (num[i] == 1) {
				sum += 3;
			}
			else if (num[i] == -1) {
				continue;
			}
			else if (num[i] == 0) {
				sum += 5;
			}
			else if (1 < num[i] < 10) {
				sum += 4;
			}
		}

		printf("%d\n", sum);
		scanf("%d", &N);
	}

	return 0;
}