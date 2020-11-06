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
	
	int cnt = 0;
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		cnt += x & 1; // odd
	}
	
	cout << min(cnt, n - cnt) << "\n";
	
	return 0;
}
