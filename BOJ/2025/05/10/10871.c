#include<stdio.h>

int main() {
	int n;
	int t;
	int a;
	scanf("%d %d", &n, &t);
	for (int i = 0;i < n;i++) {
		scanf("%d", &a);
		if (a < t)
			printf("%d ", a);
	}
}