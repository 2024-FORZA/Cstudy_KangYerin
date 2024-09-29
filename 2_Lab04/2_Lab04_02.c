#include <stdio.h>

int main() {
	int a, b, c;
	int point;
	scanf("%d %d %d", &a, &b, &c);

	if (b < c) {
		point = a / (c - b)+1;
		printf("%d", point);
	}
	else {
		printf("-1");
	}
	return 0;
}