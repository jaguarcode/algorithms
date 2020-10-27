#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	int count = 0, p, v, t;
	for(int i = 0; i < n; ++i) {
		scanf("%d %d %d", &p, &v, &t);
		if(p + v + t >= 2) count++;
	}
	printf("%d\n", count);
}
