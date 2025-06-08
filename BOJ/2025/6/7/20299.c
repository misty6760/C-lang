#include<stdio.h>
#include<stdlib.h>

struct Rating {
	int x1;
	int x2;
	int x3;
};

int main() {

	int N, K, L, i, j, chk;

	scanf("%d %d %d", &N, &K, &L);
	if ((N >= 1 && N <= 500000) && (K >= 0 && K <= 12000) && (L >= 0 && L <= 4000)) {
		struct Rating* A = (struct Rating*)malloc(sizeof(struct Rating) * N);
		struct Rating* B = (struct Rating*)malloc(sizeof(struct Rating) * N);

		for (i = 0; i < N; i++) {
			chk = 0;
			scanf("%d %d %d", &A[i].x1, &A[i].x2, &A[i].x3);
			if (A[i].x1 >= 0 && A[i].x1 <= 4000) chk = 1;
			if (A[i].x2 >= 0 && A[i].x2 <= 4000) chk = 1;
			if (A[i].x3 >= 0 && A[i].x3 <= 4000) chk = 1;
			if (!chk) return 0;
		}

		for (j = 0, i = 0; i < N; i++) {
			chk = 0;
			if ((A[i].x1 >= L) && (A[i].x2 >= L) && (A[i].x3 >= L)) chk = 1;
			if (chk && (A[i].x1 + A[i].x2 + A[i].x3) >= K) {
				B[j].x1 = A[i].x1;
				B[j].x2 = A[i].x2;
				B[j].x3 = A[i].x3;
				j++;
			}
		}
		printf("%d\n", j);
		for (i = 0; i < j; i++) {
			printf("%d %d %d ", B[i].x1, B[i].x2, B[i].x3);
		}
		free(B);
		free(A);
	}
	return 0;
}