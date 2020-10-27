#include <bits/stdc++.h>
using namespace std;
int main() {
	int x;
	scanf("%d", &x);
	int a = x / 5;
	if(x % 5 > 0) a += 1;
	printf("%d\n", a);
}
