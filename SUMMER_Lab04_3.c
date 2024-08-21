//2669
#include <stdio.h>

int main() {
	int area[10000] = { 0, };
	int x1, y1, x2, y2;

	for (int i = 0; i < 4; i++) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (int j = x1; j < x2; j++) {
			for (int k = y1; k < y2; k++) {
				area[100 * j + k] = 1;
			}
		}
	}

	int sum=0;
	for (int i = 0; i < 10000; i++) {
		if (area[i] == 1) {
			sum += 1;
		}
	}

	printf("%d", sum);
	return 0;
}