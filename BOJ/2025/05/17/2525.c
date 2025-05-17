#include<stdio.h>

int main() {
	int h, m;
	int a;
	scanf("%d %d %d", &h, &m, &a);

	h += a / 60;
	m += a % 60;

	if (m >= 60) {
		++h;
		m -= 60;
	}
	if (h >= 24) {
		h -= 24;
	}
	printf("%d %d", h, m);
}