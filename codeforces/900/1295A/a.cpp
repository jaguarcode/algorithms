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
		cin >> n;
		
		if(n % 2 == 1) {
			cout << 7;
			n -= 3;
		}
		
		while(n > 0) {
			cout << 1;
			n -= 2;
		}
		cout << "\n";
	}
	
	return 0;
}
