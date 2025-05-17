#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char plate[50] = { '\0', };
	int cnt = 0;

	gets_s(plate, 50);

	cnt = 10;
	for (int i = 0; i < strlen(plate); i++) {
		if (plate[i + 1] == '\0') continue;
		if (plate[i] == plate[i + 1]) {
			cnt += 5;
		}
		if (plate[i] != plate[i + 1]) {
			cnt += 10;
		}
	}
	printf("%d", cnt);
}