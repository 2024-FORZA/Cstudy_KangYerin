//1159
#include <stdio.h>
#include <string.h>

int main() {
	int N, apb[26] = { 0, };
	char name[151][31];
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", &name[i]);
	}
	for (int i = 0; i < N; i++) {
		apb[name[i][0] - 97] += 1;
	}

	int predaja = 0;
	for (int i = 0; i < 26; i++) {
		if (apb[i] >= 5) {
			printf("%c", i + 97);
			predaja += 1;
		}
	}
	if (predaja < 1) {
		printf("PREDAJA");
	}

	return 0;
}