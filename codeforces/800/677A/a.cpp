#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, h;
	scanf("%d %d", &n, &h);
	int w = 0;
	for(int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		if(a > h) w += 2;
		else w += 1;
	}
	printf("%d\n", w);
}
