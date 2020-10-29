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
	string s;
	cin >> s;
	
	int a = 0, b = 0;
	for(auto c : s) {
		if(c == '0') a++;
		if(c == '1') b++;
	}
	
	cout << n - (2*std::min(a, b)) << "\n";
	
	return 0;
}
