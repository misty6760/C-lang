#include<stdio.h>

int main() {
	for (int i = 0;i < 3;i++) {
		int a[2] = { 0 };
		int n;
		for (int j = 0;j < 4;j++) {
			scanf("%d", &n);
			if (n == 0)
				a[0]++;
			if (n == 1)
				a[1]++;
		}
		if (a[0] == 1 && a[1] == 3)
			printf("A\n");
		if (a[0] == 2 && a[1] == 2)
			printf("B\n");
		if (a[0] == 3 && a[1] == 1)
			printf("C\n");
		if (a[0] == 4)
			printf("D\n");
		if (a[1] == 4)
			printf("E\n");
	}
}