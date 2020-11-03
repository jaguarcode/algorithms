/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int tt;
	cin >> tt;
	while(tt--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		long long sum = b;
		a -= b;
		while(a > 0) {
			if(c - d < 0) { sum = -1; break; }
			a -= (c - d);
			sum += c;
		}
		cout << sum << "\n";
	}
	
	return 0;
}
