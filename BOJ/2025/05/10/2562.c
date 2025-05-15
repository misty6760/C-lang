#include<stdio.h>

int main() {
	int arr[9] = { 0 };
	int max = arr[0];
	int index = 0;
	for (int i = 0;i < 9;i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0;i < 9;i++) {
		if (max < arr[i]) {
			max = arr[i];
			index = i+1;
		}
	}
	printf("%d\n%d", max, index);
}