#include<stdio.h>

int main() {
	int w[51], h[51];
	int p_cnt, k;
	int i, j;

	scanf("%d", &p_cnt);

	for (int i = 0; i < p_cnt; i++) {
		scanf("%d %d", &w[i], &h[i]);
	}

	for (int i = 0; i < p_cnt; i++) {
		k = 0;
		for (int j = 0; j < p_cnt; j++) {
			if (w[i] < w[j] && h[i] < h[j])
				k++;
		}
		printf("%d ", k + 1);
	}
}