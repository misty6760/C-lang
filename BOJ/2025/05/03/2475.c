#include<stdio.h>

int main() {
	int num = 0;

	for (int i = 0;i < 5;i++) {
		int a = 0;
		scanf("%d", &a);
		num += a*a; //고유번호의 제곱을 다 더한 값
	}

	printf("%d", num % 10); //10으로 나누어서 검증수 출력
}