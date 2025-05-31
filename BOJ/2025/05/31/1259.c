#include<stdio.h>
#include<string.h>

int i, j, check;
char value[100001];

int main() {
	while (scanf("%s", value) && value[0] != '0') {
		check = 1;
		j = strlen(value);

		for (i = 0; i < j / 2; i++) {
			if (value[i] != value[j - i - 1]) {
				check = 0;
				break;
			}
		}
		if (check == 1)
			printf("yes\n");
		else
			printf("no\n");
	}
}