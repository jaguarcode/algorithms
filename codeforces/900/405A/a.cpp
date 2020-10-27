#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	int a[n] = {0};
	for(int x = 0; x < n; x++) {
		scanf("%d", &a[x]);
	}
	
	for(int x = 0; x < n; x++) {
		for(int y = 1; y < n; y++) {
			if(a[y-1] > a[y]) {
				int diff = a[y-1] - a[y];
				a[y-1] = a[y-1] - diff;
				a[y] = a[y] + diff;
			}
		}
	}
	
	// or solve with sort
	// sort(a, a+n);
	
	for(int x = 0; x < n; x++) {
		printf("%d ", a[x]);
	}
	puts("");
}
