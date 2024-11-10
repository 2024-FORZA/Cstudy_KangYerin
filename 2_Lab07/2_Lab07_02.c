#include <stdio.h>

int main() {
	char xy[8][9];
	int count = 0;
	for (int i = 0; i < 8; i++) {
		scanf("%s", xy[i]);
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0) {
				if (xy[i][j] == 'F')
					count++;
			}

		}
	}
	printf("%d", count);
	return 0;
}