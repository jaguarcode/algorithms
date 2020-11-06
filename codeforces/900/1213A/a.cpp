/**
 * author: jaguarcode
 * date:
 * 
 * We can see that the only information we need is the parity of the 
 * coordinate of each chip (because we can move all chips that have the 
 * same parity to one coordinate for free). 
 * So if the number of chips with odd coordinate is cnto 
 * then the answer is min(cnto,n−cnto).
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	int cnt = 0;
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		cnt += x & 1; // odd
	}
	
	cout << min(cnt, n - cnt) << "\n";
	
	return 0;
}
