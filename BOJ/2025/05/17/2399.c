#include<stdio.h>
#include<math.h>

int n;
long long arr[10001] = { 0, };
int main() {

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &arr[i]);
	}

	long long ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			ans += abs(arr[i] - arr[j]);
		}
	}
	printf("%lld", ans);
}