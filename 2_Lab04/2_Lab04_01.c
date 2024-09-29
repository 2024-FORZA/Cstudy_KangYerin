#include <stdio.h>

int main() {
	int age, leaf=1;
	int splitting_factor, cut;
	scanf("%d ", &age);

	while (age != 0) {
		for (int i = 0; i < age; i++) {
			scanf("%d %d", &splitting_factor, &cut);
			leaf = leaf * splitting_factor - cut;
		}
		printf("%d\n", leaf);

		leaf = 1;
		scanf("%d ", &age);
	}

	return 0;
}