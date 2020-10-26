#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	float a = 0;
	for(int x = 0; x < n; x++) {
		int r;
		scanf("%d", &r);
		a += r;
	}
	a /= n;
	printf("%.12f\n", a);
}
