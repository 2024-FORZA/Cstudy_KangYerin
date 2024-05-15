//3052
#include <stdio.h>

int main()
{
	int i, k=0, x[10];

	for (i = 0; i < 10; ++i) {
		scanf("%d", &x[i]); 
		x[i] = x[i] % 42;
	}

	int y[42] = { 0, };

	for (i = 0; i < 10; ++i) {
		y[x[i]] = 1;
	}

	for (i = 0; i < 42; ++i) {
		if (y[i] == 1)
			++k;
	}

	printf("%d", k);

	return 0;
	
}