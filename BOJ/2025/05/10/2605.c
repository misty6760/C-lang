#include<stdio.h>

int main() {
	int student, num;
	int i, j;
	int result[100] = { 0 };

	scanf("%d", &student);

	//�л� ��ȣ�� �ε��� ���� j�� �ʱ�ȭ, j�� �л� ��ȣ���� �л��� ���� ��ȣ�� �� ������ j�� ����
	/*
	i�� 0�̰� num�� 0�̸� j�� 0�̰� 0�� �� ������ �ݺ� => ���� ����. => result�� ������ ����. result = [1,2,3,4,5]
	i�� 1�̰� num�� 1�̸� j�� 1�̰� 0�� �� ������ �ݺ� => 1�� ����. => result�� j(= 1)���� ���� result�� j-1(= 0)���� ���� �ٲ�.
	=> result = [1,2,3,4,5] ->  [2,1,3,4,5]
	�� ������ �л� ����ŭ ����.
	*/
	for (i = 0;i < student;i++) {
		result[i] = i + 1; //result�� �л� ��ȣ ����
		scanf("%d", &num);
		for (j = i;j > i - num;j--) {  
			int temp = result[j];
			result[j] = result[j - 1];
			result[j - 1] = temp;
		}
	}

	for (i = 0;i < student;i++) {
		printf("%d ", result[i]);
	}
}