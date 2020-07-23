#include <stdio.h>

int main() {
	int N, m, M, T, R, time = 0;
	scanf_s("%d %d %d %d %d", &N, &m, &M, &T, &R);
	int now = m;

	if (m + T > M) { 		// 처음 맥박 + 운동 시 증가 맥박 > 최대 맥박인 경우(운동 할 수 없는 경우)
		printf("%d", time-1);
		return 0;
	}
	
	while (N>0) {
		
		if (now + T <= M) {		// 운동이 우선순위
			now += T;
			time++;
			N--;
		}
		else {
			if (now - R <= m) 		// 맥박은 m보다 낮아질 수 없음
				now = m;
			else 
				now -= R;
			time++;
		}
		
	}
	printf("%d", time);

	return 0;
}