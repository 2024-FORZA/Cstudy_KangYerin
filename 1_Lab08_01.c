#include <stdio.h>
#include <string.h>

int main() {
	int t;
	char x[80];

	scanf("%d",&t);
	
	for (int i = 0; i < t; i++) {
		scanf("%s", &x);

		int score[80];
		for (int j = 0; j < strlen(x); j++){
			if (x[j] == 'O') {
				if (x[j - 1] == 'O') {
					score[j] = score[j - 1] + 1;
				}
				else {
					score[j] = 1;
				}
			}
			else if (x[j] == 'X') {
				score[j] = 0;
			}
		}
		int sum = 0;
		for (int j = 0; j < strlen(x); j++) {
			sum = sum + score[j];
		}
		printf("%d\n", sum);
	}
	return 0;
}