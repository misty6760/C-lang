#include<stdio.h>
#define A 0

#if A == 0
int main() {
	int input;
	int result = 0;

	int remain[10] = { 0 }; //������

	for (int i = 0; i < 10; i++) {
		scanf("%d", &input);
		remain[i] = input % 42; //������ ����
	}

	for (int i = 0; i < 10; i++) {

		int count = 0; //�ߺ� üũ
		for (int j = i + 1; j < 10; j++) {
			if (remain[i] == remain[j]) { //���� �������� ���
				count++; //����
			}
		}
		if (count == 0) { //�ߺ��� ���� ��
			result++; //����
		}
	}

	printf("%d", result);
}

#else
int main()
{
	int check[42] = { 0 };

	int n;
	int count = 0;
	for (int i = 0;i < 10;i++)
	{
		scanf("%d", &n);
		check[n % 42]++;
	}

	for (int i = 0; i < 42; i++)
	{
		//���� ���� ������ ��ȣ i ������ 0�̾ƴ϶��(�ѹ��̶� 42�� ���� ������ ���� ���Դٸ�) ������ ���ش�. 
		if (check[i] != 0)
		{
			count++;
		}
	}
	printf("%d", count);

	return 0;
}
#endif