#include<stdio.h>

int main() {
	int num = 0;

	for (int i = 0;i < 5;i++) {
		int a = 0;
		scanf("%d", &a);
		num += a*a; //������ȣ�� ������ �� ���� ��
	}

	printf("%d", num % 10); //10���� ����� ������ ���
}