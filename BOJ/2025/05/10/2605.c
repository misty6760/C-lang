#include<stdio.h>

int main() {
	int student, num;
	int i, j;
	int result[100] = { 0 };

	scanf("%d", &student);

	//학생 번호의 인덱스 값을 j로 초기화, j는 학생 번호에서 학생이 뽑은 번호가 될 때까지 j를 감소
	/*
	i가 0이고 num이 0이면 j는 0이고 0이 될 때까지 반복 => 실행 안함. => result는 변하지 않음. result = [1,2,3,4,5]
	i가 1이고 num이 1이면 j는 1이고 0이 될 때까지 반복 => 1번 실행. => result의 j(= 1)번지 값이 result의 j-1(= 0)번지 값과 바뀜.
	=> result = [1,2,3,4,5] ->  [2,1,3,4,5]
	위 실행을 학생 수만큼 실행.
	*/
	for (i = 0;i < student;i++) {
		result[i] = i + 1; //result에 학생 번호 저장
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