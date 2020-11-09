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
		long long x, y;
		cin >> x >> y;
		
		long long b = std::max(x, y);
		long long a = (b) * (b) - (b - 1);
		
		if(x > y && x % 2 != 0) a -= (b - y);
		else a += (b - y);
		if(x < y && y % 2 != 0) a += (b - x);
		else a -= (b - x);
		
		cout << a << "\n";
	}
	
	return 0;
}
