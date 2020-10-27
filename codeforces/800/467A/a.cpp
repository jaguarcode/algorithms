#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	int c = 0;
	for(int i = 0; i < n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		if(b - a >= 2) c++;
	}
	printf("%d\n", c);
}
