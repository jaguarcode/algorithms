#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	
	unordered_map<char, int> c;
	for(auto ch : s) {
		c.emplace(make_pair(ch, 0));
	}
	
	// int a = 0;
	// for(const auto& n : c) a++;
	
	int a = c.size();
	
	if(a % 2) cout << "IGNORE HIM!" << "\n";
	else cout << "CHAT WITH HER!" << "\n";
}
