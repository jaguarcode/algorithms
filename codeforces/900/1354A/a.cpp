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
		if(b >= a) { cout << b << "\n"; continue; }
		if(c <= b) { cout << -1 << "\n"; continue; }
		
		a -= b;
		int diff = c - d;
		if(diff > 0) {
			long long k = (a % diff == 0) ? a/(c-d) : (a/(c-d)) + 1;
			sum += (c * k);
			cout << sum << "\n";
		} else {
			cout << -1 << "\n";
		}
	}
	
	return 0;
}
