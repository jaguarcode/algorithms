/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	unsigned long long s = 1;
	const int m = 1000000007;
	while(n--) s = (s * 2) % m;
	cout << s << "\n";
	
	return 0;
}
