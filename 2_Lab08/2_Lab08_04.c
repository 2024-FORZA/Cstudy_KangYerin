#include <stdio.h>

int main() {
	int seat[101] = { 0, };
	int n,cho, count=0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &cho);
		if (seat[cho] == 0)
			seat[cho] = 1;
		else
			count++;
	}
	printf("%d", count);
	return 0;
}

