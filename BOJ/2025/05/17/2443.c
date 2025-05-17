#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = n; i >= 1; i--) {
		for (int j = i; j < n; j++) {
			printf(" ");
		}
		for (int j = i * 2 - 1; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
}