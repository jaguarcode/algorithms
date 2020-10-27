#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	
	vector<pair<int, int>> stops;
	for(int i = 0; i < n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		stops.push_back(make_pair(a, b));
	}
	
	stack<int> capacity;
	int answer = 0;
	for(auto s : stops) {
		int out = s.first;
		int in = s.second;
		for(int x = 0; x < in; x++) {
			capacity.push(1);
		}
		
		for(int x = 0; x < out; x++) {
			capacity.pop();
		}
		
		int size = capacity.size();
		answer = max(answer, size);
	}
	
	printf("%d\n", answer);
}
