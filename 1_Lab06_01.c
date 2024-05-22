//1547
#include <stdio.h>

int swap(int *p, int *q) {
	int tmp;

	tmp = *p;
	*p = *q;
	*q = tmp;
}

int main() {
	int m, i, x, y;
	int cup[3] = { 1, 0, 0 };
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d %d", &x, &y);
		swap(&cup[x-1], &cup[y-1]);

	}
	
	if (cup[1] == 0 && cup[2] == 0 && cup[3] == 0)
		printf("-1");
	else
		for (i = 0; i < 3; i++) {
			if (cup[i] == 1)
				printf("%d", i + 1);
		}

	return 0;
}