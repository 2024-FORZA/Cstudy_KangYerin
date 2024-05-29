//2675
#include <stdio.h>
#include <string.h>

int main() {
	int T, R;
	char S[21];

	scanf("%d", &T);

	int i, j, k;
	for (i = 0; i < T; i++) {
		scanf("%d", &R);
		scanf("%s", S);
		for (j = 0; j < strlen(S); j++) {
			for (k = 0; k < R; k++) {
				printf("%c", S[j]);
			}
		}
		printf("\n");
	}
	return 0;
}


