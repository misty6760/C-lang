#include<stdio.h>

int main() {
	int n;
	int arr[42] = { 0, };
	int cnt = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		arr[n % 42]++;
	}

	for (int i = 0; i <= 41; i++) {
		if (arr[i] > 0) cnt++;
	}
	printf("%d", cnt);
}