#include <stdio.h>
#include <string.h>

int main() {
	int num;
	long long result = 0;
	char color[10];
	
	for (int i = 0; i < 3; i++) {
		scanf("%s", &color);
		if (strcmp(color, "black") == 0)
			num = 0;
		else if (strcmp(color, "brown") == 0)
			num = 1;
		else if (strcmp(color, "red") == 0)
			num = 2;
		else if (strcmp(color, "orange") == 0)
			num = 3;
		else if (strcmp(color, "yellow") == 0)
			num = 4;
		else if (strcmp(color, "green") == 0)
			num = 5;
		else if (strcmp(color, "blue") == 0)
			num = 6;
		else if (strcmp(color, "violet") == 0)
			num = 7;
		else if (strcmp(color, "grey") == 0)
			num = 8;
		else if (strcmp(color, "white") == 0)
			num = 9;

		if (i == 0)
			result += num * 10;
		else if (i == 1)
			result += num;
		else if (i == 2 && num != 0)
			for (int j = 0; j < num; j++)
				result *= 10;
	}
	printf("%lld", result);
	return 0;
}