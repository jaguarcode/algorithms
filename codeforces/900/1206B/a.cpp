/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

int n, m = 0;
vector<int> a;
int solve(int x) {
	int r = 0;
	for(int i = 0; i < n; i++) r *= a[i];
	if(r == 1) return m;
	if(a[x] == 1 || a[x] == -1) return m;
	
	if(a[x] > 0) { int d = 1 - a[x]; a[x] = 1; m += a[x] - d; }
	else { int d = 1 + a[x]; a[x] = -1; m += a[x] + d; }
	cout << m << "\n";
	
	return solve(x+1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n;
	a.resize(n);
	for(int i = 0; i < n; i++) cin >> a[n];
	
	cout << solve(0) << "\n";
	
	return 0;
}
