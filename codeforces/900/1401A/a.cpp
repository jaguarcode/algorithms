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
		int a = 0;
		if(n < k) a = k - n;
		else if(n % 2 == k % 2) a = 0;
		else a = 1;
		cout << a << "\n";
	}
	
	return 0;
}
