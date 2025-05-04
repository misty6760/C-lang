#include<stdio.h>
#include<string.h>

int main() {
	int n=0;
	scanf("%d", &n);

	int r;
	char a[1000];
	for (int i = 0;i < n;i++) {
		scanf("%d", &r);
		scanf("%s", a);
		for (int j = 0;j < strlen(a);j++) {
			for (int k = 0;k < r;k++) {
				printf("%c", a[j]);
			}
		}
		printf("\n");
	}
}