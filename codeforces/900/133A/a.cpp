#include <bits/stdc++.h>
using namespace std;
int main() {
	string p;
	cin >> p;
	bool f = false;
	for(auto c : p)
		if(c == 'H' || c == 'Q' || c == '9') { f = true; break; }
	if(f) cout << "YES" << "\n";
	else cout << "NO" << "\n";
}
