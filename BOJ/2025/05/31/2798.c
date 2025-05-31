#include<stdio.h>

int main() {
	int N, M;
	scanf("%d %d", &N, &M);

	int card[100];
	card[N];

	for (int num = 0; num < N; num++) {
		scanf("%d", &card[num]);
	}

	int blackjack = 0;
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				int sum = card[i] + card[j] + card[k];
				if (sum > blackjack && sum <= M)
					blackjack = sum;
			}
		}
	}
	printf("%d", blackjack);
}