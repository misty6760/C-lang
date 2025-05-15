#include<stdio.h>

int main() {
	int K;
	int N;
	int M;
	scanf("%d %d %d", &K, &N, &M);

	if (K * N > M)
		printf("%d", K * N - M);
	if (K * N == M)
		printf("0");
	if (K * N < M)
		printf("0");
}