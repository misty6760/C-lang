#include <stdio.h>

int main() {
	int paper[100][100] = { 0, };
	int n, x, y, count = 0;
	int i, j, k;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		for (j = y; j < y + 10; j++) {	//�迭�� ��ǥ ������� ����� �ش��ϴ� ���� 1�� �ʱ�ȭ
			for (k = x; k < x + 10; k++) {
				paper[j][k] = 1;
			}
		}
	}
	for (j = 0; j < 100; j++) {
		for (k = 0; k < 100; k++) {
			if (paper[j][k] == 1) {
				count++; //1�� �ʱ�ȭ �� ĭ�� ���
			}
		}
	}
	printf("%d", count);
}