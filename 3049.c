#include <stdio.h>
int  main() {
	int N;
	scanf_s("%d", &N);
	N = N * (N - 1) * (N - 2) * (N - 3) / 24;
	printf("%d", N);
	return 0;
}