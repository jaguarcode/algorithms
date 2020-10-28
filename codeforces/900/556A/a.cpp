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
	
	while(s.find("01")) {
		auto w = s.find("01");
		s.replace(s.begin() + w, s.begin() + w + 2, "");
	}
	
	while(s.find("10")) {
		auto w = s.find("10");
		cout << w << "\n";
		s.replace(s.begin() + w, s.begin() + w + 2, "");
	}
	
	cout << s.length() << "\n";
		
	return 0;
}
