#include<stdio.h>

int main() {
	int n, k;
	int score[1000] = { 0, };
	scanf("%d %d", &n, &k);

	for (int i = 0;i < n;i++) {
		scanf("%d", &score[i]);
	}

	int temp;
	int flag;
	for (int i = 0;i < n;i++) {
		flag = 0;
		for (int j = 0;j < n-1-i;j++) {
			if (score[j] > score[j + 1]) {
				flag = 1;
				temp = score[j];
				score[j] = score[j + 1];
				score[j + 1] = temp;
			}
		}
		if (flag == 0) break;
	}
	printf("%d", score[n - k]);
}