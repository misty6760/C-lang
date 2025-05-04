#include<stdio.h>
#include<string.h>

int main() {
	int n;
	char a[20];
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%s", a);
		if (strlen(a) >= 6 && strlen(a) <= 9) printf("yes\n");
		else printf("no\n");
	}
}