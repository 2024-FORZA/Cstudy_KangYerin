//1453
#include <stdio.h>

int main() {
	int N;
	int seat[101] = { 0, };
	scanf("%d", &N);

	int num, reject=0;
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		if (seat[num] == 0) {
			seat[num] = 1;
		}
		else {
			reject += 1;
		}
	}

	printf("%d", reject);
	return 0;
}