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
		
		bool flag = true;
		int a = 0, b = 0;
		for(size_t x = 0; x < s.length(); x++) {
			if(s[x] == '0') a++;
			if(s[x] == '1') b++;
		}
		
		if(a == 0 || b == 0) flag = false;
		if(std::min(a, b) % 2 == 0) flag = false;
		
		(flag) ? cout << "DA\n" : cout << "NET\n";
	}
	
	return 0;
}
