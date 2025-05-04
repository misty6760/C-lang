#include<stdio.h>

int main() {
	int n;
	int check;
	int min = (1e+6) + 1, max = -min;

	scanf("%d", &n);

	
	for (int i = 0;i < n;i++) {
		scanf("%d", &check);
		if (check > max) max = check;
		if (check < min) min = check;
	}


	printf("%d %d", min, max);
}