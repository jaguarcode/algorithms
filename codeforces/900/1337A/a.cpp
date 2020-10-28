/**
 * author: jaguarcode
 * date: 28.10.2020 14H04M31S
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--) {
		int x, n, m;
		cin >> x >> n >> m;
		
		if(x > 20) {
			while(x > 0 && n--)
				x = round(x/2) + 10;
			while(x > 0 && m--)
				x = x - 10;
		} else {
			while(x > 0 && m--)
				x = x - 10;
			while(x > 0 && n--)
				x = round(x/2) + 10;
		}
		cout << ((x <= 0) ? "YES" : "NO") << "\n";
	}
	return 0;
}
