#include <stdio.h>

int main() {
	int n, t;
	int Ycost=0, Mcost=0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		Ycost += ((t / 30) + 1) * 10;
		Mcost += ((t / 60) + 1) * 15;
	}

	if (Ycost > Mcost)
		printf("M %d", Mcost);
	else if (Ycost == Mcost)
		printf("Y M %d", Ycost);
	else
		printf("Y %d", Ycost);

	return 0;
}