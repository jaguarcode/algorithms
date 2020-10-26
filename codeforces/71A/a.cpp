#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<string> words;
	words.resize(n);
	for(int i = 0; i < n; ++i) {
		cin >> words[i];
	}
	
	for(string v : words) {
		string abb;
		int size = v.size();
		if(size > 10) abb = v[0] + to_string(size - 2) + v[size - 1];
		else abb = v;
		cout << abb << "\n";
	}
}
