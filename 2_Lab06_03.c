#include <stdio.h>
#include <string.h>
char word[1000001];
int count[26];
int main() {
	int max = 0;
	char ans;
	int len;
	scanf("%s", word);
	len = strlen(word);

	for (int i = 0; i < len; i++) {
		if (word[i] >= 'a')
			count[word[i] - 'a']++;
		else
			count[word[i] - 'A']++;
	}

	for (int i = 0; i < 26; i++) {
		if (max == count[i])
			ans = '?';
		else if (count[i] > max) {
			max = count[i];
			ans = 'A' + i;
		}
	}

	printf("%c", ans);
	return 0;
}