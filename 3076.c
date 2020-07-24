#include <stdio.h>

int main() {

	int  A, B, R, C = 0;
	scanf_s("%d %d", &R, &C);
	scanf_s("%d %d", &A, &B);

	for (int k = 0; k < R; k++) {
		if (k % 2 == 1) {		// R이 홀수면 C가 홀수일때 B만큼 x찍고 C가 짝수일 때 B만큼 .을 찍는다. -> \n -> A만큼 반복
			for (int i = 0; i < A; i++) {
				for (int m = 0; m < C; m++) {
					for (int j = 0; j < B; j++) {
						if (m % 2 == 1)
							printf("X");
						else
							printf(".");
					}

				}
				printf("\n");
			}
		}
		else {
			for (int i = 0; i < A; i++) {
				for (int m = 0; m < C; m++) {
					for (int j = 0; j < B; j++) {
						if (m % 2 == 1)
							printf(".");
						else
							printf("X");
					}

				}printf("\n");
			}
		}
	}

	return 0;
	
}

