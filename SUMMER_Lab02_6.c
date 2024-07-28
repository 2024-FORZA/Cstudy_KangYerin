//2309
#include <stdio.h>

int main() {
	int h[10], sum = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &h[i]);
		sum += h[i];
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (i != j) {
				if (h[i] + h[j] == sum - 100) {
					h[i] = 0; h[j] = 0;
					break;
				}
			}
		}
		if (h[i] == 0) {
			break;
		}
	}

	int min = 100, x ;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (min > h[j] && h[j]!=0) {
				min = h[j];
				x = j;
			}
		}
		if (min != 100) {
			printf("%d\n", min);
			min = 100;
			h[x] = 0;
		}
	}

	return 0;
}