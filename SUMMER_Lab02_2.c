//1475
#include <stdio.h>

int main() {
	char N[8];
	scanf("%s", &N);

	int num[10] = { 0, };
	for (int i = 0; i < 8; i++) {
		if (N[i] - '0' != 9) {
			num[N[i] - '0'] += 1;
		}
		else {
			num[6] += 1;
		}
	}

	if (num[6]%2==1) {
		num[6] = (num[6]+1) / 2;
	}
	else {
		num[6] = num[6] / 2;
	}

	int max = 0;
	for (int i = 0; i < 10; i++) {
		if (num[i] > max) {
			max = num[i];
		}
	}

	printf("%d", max);
	return 0;
}