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
		string s;
		cin >> s;
		
		int i = s.find("11");
		int j = s.rfind("00");
		
		cout << (i != -1 && j != -1 && i < j ? "NO" : "YES") << "\n";
	}

	return 0;
}
