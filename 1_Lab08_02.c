#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	char x[100];
	scanf("%s", x);

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + x[i]-'0';
	}
	printf("%d", sum);

	return 0;
}