#include<stdio.h>

int main() {
	int h, m; // 입력 시간
	int H, M; // 출력 시간
	scanf("%d %d", &h, &m);

	// 분이 45보다 크거나 같을 때
	if (m >= 45) { 
		H = h; 
		M = m - 45; // 그냥 빼주기
		printf("%d %d", H, M);
	}
	// 분이 45보다 작을 때
	if (m < 45) { 
		// 시간이 0인지 확인
		// 0이면
		if (h == 0) { 
			H = 24+(h - 1); //원래 시간에서 1을 빼고 그 수를 24에 더함
			M = 60 - (45 - m);
			printf("%d %d", H, M);
		}
		// 0이 아니면
		else {
		H = h - 1; //입력 받은 시간에서 1을 뺌
		M = 60 - (45 - m);
		printf("%d %d", H, M);
		}
	}
}