#include<stdio.h>

int main() {
	int a[9] = { 0 };
	int check = 0;
	
	int max = a[0];
	for (int i = 0;i < 9;i++) {
		scanf("%d", &a[i]);
		if (max < a[i]) {
			max = a[i];
			check = i+1;
		}
	}
	printf("%d\n%d", max, check);
}