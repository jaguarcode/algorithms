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

	bool a[26] = {false};
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for(auto v : s) a[v-97] = true;
	
	bool flag = true;
	for(auto b : a){
		if(b == false) {
			flag = false;
			break;
		}
	}

	(flag) ? cout << "YES" << "\n" : cout << "NO" << "\n";

	return 0;
}
