#include <bits/stdc++.h>
using namespace std;
int main() {
	set<int> s;
	for(int i = 0; i < 4; i++) {
		int a;
		scanf("%d", &a);
		s.insert(a);
	}
	printf("%d\n", 4-(int)s.size());
}
