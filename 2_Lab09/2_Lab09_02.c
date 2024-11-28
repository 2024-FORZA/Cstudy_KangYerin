#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	char field[50][50];
	for (int i = 0; i < n; i++) {
		scanf("%s", &field[i]);
	}

	int row[50] = { 0, }, col[50] = { 0, };//row За, col ї­
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (field[i][j] == 'X') {
				row[i] = 1;
				col[j] = 1;
			}
		}
	}
	
	int count_r = n, count_c = m;
	for (int i = 0; i < n || i < m; i++) {
		if (row[i] == 1)
			count_r--;
		if (col[i] == 1)
			count_c--;
	}

	if (count_r <= count_c)
		printf("%d", count_c);
	else
		printf("%d", count_r);

	return 0;
}