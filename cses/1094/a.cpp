/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	long long m = 0;
	for(int i = 1; i < n; i++) {
		if(a[i] - a[i-1] < 0) {
			int diff = a[i-1] - a[i];
			m += diff;
			a[i] = a[i] + diff;
		};
	}
	
	cout << m << "\n";
	
	return 0;
}
