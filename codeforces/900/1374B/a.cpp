/**
 * 	author: jaguarcode
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int cnt = 0;
		while(n > 1) {
			if(n % 6 == 0) {
				n /= 6;
			} else {
				n *= 2;
			}
			cnt++;
			if(n >= 1e9+7) { cnt = -1; break; }
		}
		cout << cnt << "\n";
	}
	return 0;
}
