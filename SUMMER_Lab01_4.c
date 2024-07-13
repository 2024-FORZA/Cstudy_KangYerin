//1225
#include <stdio.h>
#include <string.h>

int main() {
	long long sum = 0;
	char A[10001], B[10001];
	scanf("%s %s", &A, &B);

	for (int i = 0; i < strlen(A); i++) {
		for (int j = 0; j < strlen(B); j++) {
			sum += (A[i] - '0') *(B[j] - '0');
		}
	}
	printf("%lld", sum);
	return 0;
}