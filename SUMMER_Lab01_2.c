//5622
#include <stdio.h>
#include <string.h>
	
int main() {
	int sum = 0;
	char phone[11][5] = { "","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ","" };
	char word[16];
	scanf("%s", &word);
	
	for (int i = 0; i < strlen(word); i++) {
		for (int j = 0; j < 10; j++) {
			if (strchr(phone[j], word[i]) != NULL) {
				sum = sum + j + 2;
			}
		}
	}
	printf("%d", sum);
	return 0;
}