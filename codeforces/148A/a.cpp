#include <bits/stdc++.h>
using namespace std;
int main() {
	int k, l, m, n, d;
	scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);
	int a = 0;
	for(int x = 1; x < d + 1; x++)
		if(x % k == 0 || x % l == 0 || x % m == 0 || x % n == 0) a++;	
	printf("%d\n", a);
}
