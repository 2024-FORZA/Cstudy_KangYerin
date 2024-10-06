#include <stdio.h>
#include <string.h>

int main() {
	char word1[1000], word2[1000];
	int count = 0;
	scanf("%s", &word1);
	scanf("%s", &word2); 

	count = strlen(word1) + strlen(word2);
	for (int i = 0; i < strlen(word1); i++) {
		for (int j = 0; j<  strlen(word2); j++) {
			if (word1[i] == word2[j]) {
				count-=2;
				word1[i] = 1;
				word2[j] = -1;
			}
		}
	}
	printf("%d", count);
	return 0;
}