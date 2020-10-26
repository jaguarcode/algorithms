#include <bits/stdc++.h>
using namespace std;
int main() {
	int k, n, w;
	scanf("%d %d %d", &k, &n, &w);
	int answer = 0;
	for(int x = 0; x <= (k*w); x+=k) answer += x;
	if(answer > n) answer -= n;
	else answer = 0;
	printf("%d\n", answer);
}
