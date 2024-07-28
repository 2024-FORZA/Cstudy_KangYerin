//11005
#include <stdio.h>

int main() {
	int N;
	int B;
	scanf("%d %d", &N, &B);

	char num[36] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	char x[30];

	int i;
	for (i = 0; N >= B; i++) {
		x[i] = num[N % B];
		N = (N - N % B) / B;
	}
	x[i] = num[N % B];

	for (i=i ; i >= 0; i--) {
		printf("%c", x[i]);
	}

	return 0;
}