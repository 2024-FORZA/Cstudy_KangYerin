#include <stdio.h>

int main() {
	int x, t, r, max, min;
	int n;
	scanf("%d %d %d %d %d", &n, &min, &max, &t, &r);

	x = min;
	int all = 0, ex = 0;
	if (min + t > max)
		printf("-1");
	else {
		while (ex < n) {

			if (x + t <= max) {
				all++;
				ex++;
				x += t;
			}
			else if (x - r < min) {
				all++;
				x = min;
			}
			else {
				all++;
				x -= r;
			}
		}
		printf("%d", all);
	}
	return 0;
}