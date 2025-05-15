#include<stdio.h>

int main() {
	int cnt;
	char n[101];
	int result = 0;
	scanf("%d %s", &cnt, &n);
	for (int i = 0;i < cnt;i++) {
		result += n[i] - '0';
	}
	printf("%d", result);
}