/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

/**
 * x < 0, 	infinity
 * x = 0, 	0
 * x > 0,	min(solve(x-c)+1), c == coins
 */
const int MAXN = 1e9+5;

vector<int> coins = {1,3,4};
int cnt = 0;

int solve(int x) {
	if(x == 0) return 0;
	if(x < 0) return MAXN;
	int best = MAXN;
	for(auto c : coins)
		best = std::min(best, solve(x-c)+1);
	return best;
}

vector<bool> ready;
vector<int> value;

int solve_with_memoization(int x) {
	if(x == 0) return 0;
	if(x < 0) return MAXN;
	if(ready[x]) return value[x];
	int best = MAXN;
	for(auto c : coins)
		best = std::min(solve_with_memoization(x-c)+1, best);
	ready[x] = true;
	value[x] = best;
	return best;
}

int solve_with_loop(int n) {
	value[0] = 0;
	for(int x = 1; x <= n; x++) {
		value[x] = MAXN;
		for(auto c : coins) {
			if(x-c >= 0) value[x] = std::min(value[x], value[x-c]+1); 
		}
	}
	return value[n];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	ready.resize(n);
	value.resize(n);
	
	//int answer = solve(n);
	//int answer = solve_with_memoization(n);
	int answer = solve_with_loop(n);
	cout << answer << "\n";
	
	return 0;
}
