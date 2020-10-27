#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	vector<int> v;
	v.resize(n);
	for(int x = 0; x < n; x++) {
		int a;
		scanf("%d", &a);
		v[x] = a;
	}
	
	sort(v.begin(), v.end(), greater<int>());
	
	int answer = 0;
	for(int x = 0; x < n; x++) {
		int a = 0;
		for(int i = 0; i <= x; i++) a += v[i];
		int b = 0;
		for(int j = x + 1; j < n; j++) b += v[j];
		
		if(a > b) { answer = x + 1; break; }
	}
	
	printf("%d\n", answer);
}
