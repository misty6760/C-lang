#include<stdio.h>
#define A 0

#if A == 0
int main() {
	int input;
	int result = 0;

	int remain[10] = { 0 }; //나머지

	for (int i = 0; i < 10; i++) {
		scanf("%d", &input);
		remain[i] = input % 42; //나머지 저장
	}

	for (int i = 0; i < 10; i++) {

		int count = 0; //중복 체크
		for (int j = i + 1; j < 10; j++) {
			if (remain[i] == remain[j]) { //같은 나머지일 경우
				count++; //증가
			}
		}
		if (count == 0) { //중복이 없을 때
			result++; //증가
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
		//만약 지금 점수판 번호 i 번지가 0이아니라면(한번이라도 42로 나눈 나머지 값이 나왔다면) 개수를 세준다. 
		if (check[i] != 0)
		{
			count++;
		}
	}
	printf("%d", count);

	return 0;
}
#endif