#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int answer = 0;
	while(a <= b) {
		answer++;
		a *= 3; b *= 2;
	}
	printf("%d\n", answer);
}
