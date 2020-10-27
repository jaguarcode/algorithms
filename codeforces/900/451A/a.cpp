#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	bool f = true;
	while(m * n > 0) {
		n--; m--;
		f = !f;
	}
	if(f) cout << "Malvika" << "\n";
	else cout << "Akshat" << "\n";
}
