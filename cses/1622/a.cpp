/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

string s;
size_t n;
vector<bool> chosen;
vector<int> permutation;
set<string> result;

void search(size_t k) {
	if(permutation.size() == n) {
		string r = s;
		for(size_t i = 0; i < n; i++)
			r[i] = permutation[i];
		result.insert(r);
	} else {
		for(size_t i = 0; i < n; i++) {
			if(chosen[i]) continue;
			chosen[i] = true;
			permutation.push_back(s[i]);
			search(k+1);
			chosen[i] = false;
			permutation.pop_back();
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> s;
	n = s.size();
	chosen.resize(n);
	
	search(0);
	
	cout << result.size() << "\n";
	for(const auto& e : result) cout << e << "\n";
	
	return 0;
}
