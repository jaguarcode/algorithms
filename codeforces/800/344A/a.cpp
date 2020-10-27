#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	
	vector<bool> v;
	for(int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		if(a == 10) v.push_back(true);
		else v.push_back(false);
	}
	
	int s = v.size();
	int c = 1;
	for(int i = 1; i < s; i++) {
		bool a, b;
		a = v[i-1]; b = v[i];
		if(a != b) c++;
	}
	
	printf("%d\n", c);
}
