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
	getline(cin, s);
	
	set<char> result;
	for(size_t i = 0; i < s.size(); i++) {
		char ch = s[i];
		if(97 <= ch && ch <= 122) result.insert(ch);
	}
	cout << result.size() << "\n";
	
	return 0;
}
