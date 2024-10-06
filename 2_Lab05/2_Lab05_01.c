#include <stdio.h>

int main() {
	int a, b, v;
	scanf("%d %d %d", &a, &b, &v);
	
	int day;
	if ((v - a) % (a - b) == 0)
		day = (v - a) / (a - b) + 1;
	else
		day = (v - a) / (a - b) + 2;
	
	printf("%d", day);

	return 0;
}