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
const int INF = 1e9+5;

vector<int> coins = {1,3,4};

int solve(int x) {
	if(x == 0) return 0;
	if(x < 0) return INF;
	int best = INF;
	for(auto c : coins)
		best = std::min(best, solve(x-c)+1);
	return best;
}

vector<bool> ready;
vector<int> value;

int solve_with_memoization(int x) {
	if(x == 0) return 0;
	if(x < 0) return INF;
	if(ready[x]) return value[x];
	int best = INF;
	for(auto c : coins)
		best = std::min(best, solve_with_memoization(x-c)+1);
	ready[x] = true;
	value[x] = best;
	return best;
}

int solve_with_loop(int n) {
	value[0] = 0;
	for(int x = 1; x <= n; x++) {
		value[x] = INF;
		for(auto c : coins) {
			if(x-c >= 0) value[x] = std::min(value[x], value[x-c]+1); 
		}
	}
	return value[n];
}

vector<int> first;
void print_solve(int n) {
	value[0] = 0;
	for(int x = 1; x <= n; x++) {
		value[x] = INF;
		for(auto c : coins) {
			if(x-c >= 0 && value[x-c]+1 < value[x]) {
				value[x] = value[x-c]+1;
				first[x] = c;
			}
		}
	}
	
	while(n > 0) {
		cout << first[n] << "\n";
		n -= first[n];
	}
}

vector<int> cnt;
int counting_solutions(int n) {
	cnt[0] = 1;
	for(int x = 1; x < n; x++) {
		for(auto c : coins) {
			if(x-c >= 0) {
				cnt[x] += cnt[x-c];
				cnt[x] %= INF;
			}
		}
	}
	return cnt[n-1];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	ready.resize(n);
	value.resize(n);
	first.resize(n);
	cnt.resize(n);
	
	//int answer = solve(n);
	//int answer = solve_with_memoization(n);
	int answer = solve_with_loop(n);
	cout << answer << "\n";
	
	//print_solve(n);
	
	int count = counting_solutions(n);
	cout << count << "\n";
	
	return 0;
}
