/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string s;
	cin >> s;
	
	int max = 1, l = 1;
	for(size_t i = 1; i < s.size(); i++) {
		if(s[i-1] == s[i]) l++;
		else l = 1;
		max = std::max(max, l);
	}
	
	cout << max << "\n";
	
	return 0;
}
