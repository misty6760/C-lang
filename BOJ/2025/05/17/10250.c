#include<stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		int h, w, n, x, y;
		int cnt = 0;
		scanf("%d %d %d", &h, &w, &n);
		x = n / h + 1;
		y = n % h;

		if (y == 0) {
			y = h;
			x -= 1;
		}
		printf("%d%02d\n", y, x);
	}
}