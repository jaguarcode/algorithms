/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int k;
	cin >> k;
	vector<int> a(12);
	for(int i = 0; i < 12; i++) cin >> a[i];
	
	sort(a.begin(), a.end(), greater<int>());
		
	int s = 0, i = 0;
	while(s < k) s += a[i++];
	cout << ((i > 12) ? -1 : i) << "\n";
	
	return 0;
}
