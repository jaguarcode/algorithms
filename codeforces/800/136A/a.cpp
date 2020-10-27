#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	vector<int> k;
	k.resize(n);
	for(int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		k[a-1] = i+1;
	}
	
	for(auto a : k)
		printf("%d ", a);
	puts("");
}
