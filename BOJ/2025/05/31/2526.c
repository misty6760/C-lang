#include<stdio.h>

int main() {
	int start, div;
	int store[1001] = { 0 };
	int i, j;

	scanf("%d %d", &start, &div);
	int temp = start;
	store[temp] += 1;
	while (1) {
		temp = temp * start % div;
		if (store[temp] == 2) break;
		store[temp] += 1;
	}
	int cnt = 0;
	for (i = 0; i <= 1000; i++) {
		if (store[i] == 2) cnt++;
	}
	printf("%d", cnt);
}