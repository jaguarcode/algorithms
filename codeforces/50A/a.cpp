#include <bits/stdc++.h>
using namespace std;
int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	int scale = m * n, answer = 0;
	while(scale > 1) {
		scale -= 2;
		answer++;
	}
	printf("%d\n", answer);
}
