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
		vector<int> a(n);
		for(int i = 0; i < n; i++) cin >> a[i];
		
		bool flag = true;
		for(int i = 0; i < n; i++)
			if(a[0] % 2 != a[i] % 2) flag = false;
			
		cout << ((flag) ? "YES" : "NO") << "\n";
	}
	
	return 0;
}
