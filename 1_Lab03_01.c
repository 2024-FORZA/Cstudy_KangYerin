//10817
#include <stdio.h>

int main(){
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	if (B <= A && A <= C || C <= A && A <= B)
		printf("%d", A);
	else if (A <= B && B <= C || C <= B && B <= A)
		printf("%d", B);
	else
		printf("%d", C);
	
	return 0;
}

