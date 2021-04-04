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
		int a, b;
		cin >> a >> b;
		a %= b;
		cout << ((b >= a) ? ((a == 0) ? 0 : (b - a)) : (a - b)) << "\n";
	}
	
	return 0;
}
