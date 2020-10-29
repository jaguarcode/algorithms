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
		int n;
		int a, b, c, d;
		cin >> n >> a >> b >> c >> d;
		int l = n * (a - b), r = n * (a + b);
		if(r < c - d || c + d < l) cout << "No\n";
		else cout << "Yes\n";
	}
	return 0;
}
