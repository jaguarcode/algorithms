#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, t;
	scanf("%d %d", &n, &t);
	string l;
	cin >> l;
	vector<string> v;
	v.resize(l.size());
	v[0] = l[0];
	for(int x = 0; x < t; x++) {
		for(int i = 1; i < n; i++) {
			if(l[i-1] == 'B' && l[i] == 'G') {
				v[i-1] = l[i];
				v[i] = l[i-1];
			} else
				v[i] = l[i];
		}
		
		l = "";
		for(auto c : v) l += c;
	}
	
	cout << l << "\n";
}
