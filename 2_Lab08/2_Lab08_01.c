#include <stdio.h>

int main() {
	int n, m;
	int count = 0;
	scanf("%d", &n);
	m = n;

	do {
		m = (m % 10) * 10 + ((m / 10) + (m % 10)) % 10;
		count++;
	} while (m != n);

	printf("%d", count);
	return 0;
}