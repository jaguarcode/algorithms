#include <bits/stdc++.h>
using namespace std;
int main() {
	string a, b;
	cin >> a >> b;
	int s = a.size();
	vector<int> r;
	r.resize(s);
	for(int x = 0; x < s; x++)
		r[x] = ((int)a[x] - 48) ^ ((int)b[x] - 48);
	for(auto i : r) printf("%d", i);
	puts("");
}
