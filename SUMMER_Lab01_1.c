//2563
#include <stdio.h>

int main() {

	int paper[100][100]={ 0, }; //도화지

	int num, x[100], y[100]; //색종이
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d %d", &x[i], &y[i]);
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				paper[x[i] + j][y[i] + k] = 1;
			}
		}
	}

	int area = 0;
	for (int i = 0; i < 100; i++) {
		for ( int j=0;j<100;j++) {
			if (paper[i][j]==1) {
				area += 1;
			}
		}
	}

	printf("%d", area);

	return 0;
}