#include<stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (b >= c) {
		printf("-1");
	}
	else {
		int ans = a / (c - b) + 1;
		printf("%d", ans);
	}
}