#include<stdio.h>
#include<string.h>

int main() {
	char a[502] = { '\0' };
	while (1) {
		fgets(a, 500, stdin);
		if (strcmp(a, "END\n") == 0)
			break;
		for (int i = strlen(a)-2;i >= 0;i--) {
				printf("%c", a[i]);
		}
		printf("\n");
	}
}