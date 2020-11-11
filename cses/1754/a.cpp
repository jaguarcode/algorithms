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
		cout << ((a+b) % 3 == 0 && (min(a, b) * 2 >= max(a, b)) ? "YES" : "NO") << "\n";
	}

	return 0;
}
