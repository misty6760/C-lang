#include<stdio.h>
#include<string.h>

char s[1000001];

int main() {
	scanf("%s", s);
	int cnt = 1;
	while (cnt < strlen(s)) {
		if (s[cnt] != s[0]) break;
		cnt += 1;
	}
	printf("%d", cnt);
}