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
		int n, k;
		cin >> n >> k;
		
		int d = 1;
		for(int x = d + 1; x <= n; x++)
			if(n % x == 0) { d = x; break; }
		n += d;
		n += (k-1) * 2;
		
		cout << n << "\n";
	}
	
	return 0;
}
