#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0;i < n;i++) {
		int N;
		scanf("%d", &N);
		if (N < 10) {
			if ((N * N) % 10 == N) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
		else if(N < 100){
			if ((N * N) % 100 == N) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
		else {
			if ((N * N) % 1000 == N) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
	}
}