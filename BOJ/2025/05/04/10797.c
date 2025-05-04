#include<stdio.h>

int main() {
	int day;
	int car;
	int check = 0;

	scanf("%d", &day);
	for (int i = 0;i < 5;i++) {
		scanf("%d", &car);
		if (day == car % 10) check++;
	}
	printf("%d", check);
}