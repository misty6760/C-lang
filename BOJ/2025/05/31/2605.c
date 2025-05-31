#include<stdio.h>

int main() {
	int student, num;
	int result[100] = { 0 };

	scanf("%d", &student);

	for (int i = 0; i < student; i++) {
		result[i] = i + 1; //result에 학생 번호 저장

		scanf("%d", &num);

		for (int j = i; j > i - num; j--) {
			int temp = result[j];
			result[j] = result[j - 1];
			result[j - 1] = temp;
		}
	}

	for (int i = 0; i < student; i++) {
		printf("%d ", result[i]);
	}
}