#include <bits/stdc++.h>
using namespace std;
int main() {
	string s, t;
	cin >> s >> t;
	int a = s.size();
	bool f = true;
	int y = a - 1;
	for(int x = 0; x < a; x++)
		if(s[x] != t[y--]) f = false;
	if(f) cout << "YES" << "\n";
	else cout << "NO" << "\n";
}
