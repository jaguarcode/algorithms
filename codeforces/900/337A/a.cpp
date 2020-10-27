#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	vector<int> v;
	v.resize(m);
	for(int x = 0; x < m; x++) scanf("%d", &v[x]);
	sort(v.begin(), v.end());
	int a = 1e9 +7;
	for(int x = n-1; x < m; x++) {
		int d = v[x] - v[x-(n-1)];
		a = std::min(a, d);
	}
	printf("%d\n", a);
}
