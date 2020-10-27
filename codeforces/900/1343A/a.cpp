#include <bits/stdc++.h>
using namespace std;
int test_case(int n) {
	int x = 0;
	for(int k = 2; k < 30; k++) {
		x = n / pow(2, k);
		printf("%d\n", x);
	}
	return x;
}

int main() {
	int n;
	scanf("%d", &n);
	int a[n] = {0};
	for(int x = 0; x < n; x++) scanf("%d", &a[n]);
	for(int x = 0; x < n; x++)
		printf("%d\n", test_case(a[n]));
}
