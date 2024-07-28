//1065
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	int sum = 0;
	int num1, num2, num3;
	for (int i = 1; i <= N; i++) {
		if (i < 100) {
			sum += 1;
		}
		else if (100<=i && i<=999){
			for (int j = 1; j<10; j++) {
				if (i - j * 100 < 100) {
					num1 = j;
					break;
				}
			}
			for (int j = 0; j < 10; j++) {
				if (i - num1 * 100 -j * 10 < 10) {
					num2 = j;
					num3 = i - num1 * 100 - j * 10;
					break;
				}
			}
			if (num1 - num2 == num2 - num3) {
				sum += 1;
			}
		}
	}
	printf("%d", sum);
	return 0;
}