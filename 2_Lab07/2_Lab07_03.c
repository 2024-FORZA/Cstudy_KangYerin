#include <stdio.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);

	int day=0;

	for (int i = 1; i < x; i++) {
		if (i == 2)
			day += 28;
		else if (i == 4 || i == 6 || i == 9 || i == 11)
			day += 30;
		else
			day += 31;
	}
	day += y;

	switch (day % 7) {
	case 0: printf("SUN"); break;
	case 1: printf("MON"); break;
	case 2: printf("TUE"); break;
	case 3: printf("WED"); break;
	case 4: printf("THU"); break;
	case 5: printf("FRI"); break;
	case 6: printf("SAT"); break;
	}

	return 0;
}