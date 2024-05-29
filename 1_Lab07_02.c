//10809
#include <stdio.h>

int main() {
	char S[101];
	scanf("%s", S);

	char A[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int B[26] = { 0, };

	int i, j;

	for (i = 0; i < 26; i++) {
		B[i] = -1;
	}

	for (i = 0; i < 26; i++) {
		for (j = 0; j < strlen(S); j++) {
			if (A[i] == S[j] && B[i]==-1)
				B[i] = j;
		}
	}
	for (i = 0; i < 26; i++) {
		printf("%d ", B[i]);
	}

	return 0;
}