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
	
	vector<int> a(n);
	for(int i = 1; i < n + 1; i++)
		if(i%2 == 0) a[(i/2)-1] = i;
		else a[n/2+i/2] = i;
	
	bool b = true;
	for(int i = 1; i < n; i++)
		if(abs(a[i-1] - a[i]) == 1) { b = false; break; }
	
	if(b) {
		for(int i = 0; i < n; i++) cout << a[i] << " ";
		cout << "\n";
	} else cout << "NO SOLUTION" << "\n";
	
	return 0;
}
