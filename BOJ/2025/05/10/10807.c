#include<stdio.h>

int main() {
	int N;
	int in[100] = { 0 };
	int v;
	int cnt=0;
	scanf("%d", &N);
	for (int i = 0;i < N;i++) {
		scanf("%d", &in[i]);
	}
	scanf("%d", &v);
	for (int i = 0;i < N;i++) {
		if (in[i] == v)
			cnt++;
	}
	printf("%d", cnt);
}