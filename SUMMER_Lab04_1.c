//1152
#include <stdio.h>
#include <string.h>

int main() {
	char x[1000001];
	scanf("%[^\n]s", &x); //\n이 나올 때까지 입력

	int count = 0;

	if (x[0] == ' ') { //" "가 아니라 ' '로 비교
		count -= 1;
	}

	for (int i = 0; i < strlen(x); i++) {
		if (x[i] == ' ' && i != strlen(x) - 1) {
			count += 1;
		}
	}
	count += 1;

	printf("%d", count);
	return 0;
}