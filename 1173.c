#include <stdio.h>

int main() {
	int N, m, M, T, R, time = 0;
	scanf_s("%d %d %d %d %d", &N, &m, &M, &T, &R);
	int now = m;

	if (m + T > M) { 		// ó�� �ƹ� + � �� ���� �ƹ� > �ִ� �ƹ��� ���(� �� �� ���� ���)
		printf("%d", time-1);
		return 0;
	}
	
	while (N>0) {
		
		if (now + T <= M) {		// ��� �켱����
			now += T;
			time++;
			N--;
		}
		else {
			if (now - R <= m) 		// �ƹ��� m���� ������ �� ����
				now = m;
			else 
				now -= R;
			time++;
		}
		
	}
	printf("%d", time);

	return 0;
}