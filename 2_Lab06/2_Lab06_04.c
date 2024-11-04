#include <stdio.h>

int main()
{
	char X[81], Y[81], Z[81] = { 0, };
	char* A = X, * B = Y, * C = Z;
	scanf("%s%s", A, B);

	while (*A) ++A;
	while (*B) ++B;
	while (--A >= X) *C++ = *A - '0';
	for (C = Z; --B >= Y; ) *C++ += *B - '0';

	for (C = Z; C < Z + 80; C++)
		if (*C >= 2) *C -= 2, C[1] += 1;

	C = Z + 80;
	while (C > Z && *C == 0) --C;
	while (C >= Z) putchar(*C-- + '0');
	return 0;
}