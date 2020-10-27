#include <bits/stdc++.h>
using namespace std;
int main() {
		int n, k;
		scanf("%d %d", &n, &k);
		vector<int> scores;
		scores.resize(n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &scores[i]);
		}
		
		int x = scores[k - 1], size = scores.size(), count = 0;
		for(int i = 0; i < size; ++i) {
			if(scores[i] >= x && scores[i] > 0) count++;
		}
		
		printf("%d\n", count);
}
