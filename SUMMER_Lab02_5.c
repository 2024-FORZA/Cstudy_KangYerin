//1735
#include <stdio.h>

int main() {
	int a1, a2, b1, b2;
	scanf("%d %d", &a1, &b1);
	scanf("%d %d", &a2, &b2);

	int A, B;
	A = a1 * b2 + a2 * b1;
	B = b1 * b2;

	for (int i = 2; i <= A && i <= B; ) {
		if (A % i == 0 && B % i == 0) {
			A = A / i;
			B = B / i;
		}
		else {
			i++;
		}
	}
	printf("%d %d", A, B);
	return 0;
}