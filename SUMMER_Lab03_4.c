#include <stdio.h>

int main() {
	int num1, num2;
	int x1, x2, y1, y2;

	scanf("%d", &num1);
	scanf("%d", &num2);

	x1 = num1 / 4; 
	x2 = num2 / 4;
	y1 = num1 % 4;
	y2 = num2 % 4;

	if (num1 % 4 == 0) {
		x1 -= 1;
	}
	if (num2 % 4 == 0) {
		x2 -= 1;
	}
	if (y1 == 0) {
		y1 = 4;
	}
	if (y2 == 0) {
		y2 = 4;
	}

	int xlen, ylen;
	xlen = abs(x1 - x2);
	ylen = abs(y1 - y2);

	printf("%d", xlen + ylen);

	return 0;
}