#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	int a[n] = {0};
	for(int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		a[i] = x;
	}
	
	int c = 1, max = 1;
	for(int i = 1; i < n; i++) {
		if(a[i-1] <= a[i]) {
			c++;
			max = std::max(max, c);
		} else c = 1;
	}
	
	printf("%d\n", max);
}
