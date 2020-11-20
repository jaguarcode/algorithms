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
	set<int> a;
	for(int i = 0; i < n; i++) {
		int v;
		cin >> v;
		a.insert(v); 
	}
	
	cout << a.size() << "\n";
	
	
	return 0;
}
