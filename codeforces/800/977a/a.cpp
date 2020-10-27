#include <bits/stdc++.h>
using namespace std;

void test_cases() {
	int n, k;
	scanf("%d %d", &n, &k);
	
	while(k > 0) {
		if(n % 10 == 0) n /= 10; 
		else n -= 1;
		k--;
	}
	printf("%d\n", n);
}

int main() {
	test_cases();
}
