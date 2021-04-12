/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

auto clk = clock();

ll n;
ll answer = 0;
vector<vector<bool>> visited;
vector<pair<ll, ll>> result;

void backtrack(ll x, ll y) {
	if(x < 0 || y < 0 || x > n-1 || y > n-1) return;
	if(visited[x][y]) return;
	visited[x][y] = true;
	
	// optimization #3
	if((y == 0 || y == n-1) && x-1 >= 0 && x+1 <= n-1 && !visited[x-1][y] && !visited[x+1][y]) {
		visited[x][y] = false;
		return;
	}
	
	if((x == 0 || x == n-1) && y-1 >= 0 && y+1 <= n-1 && !visited[x][y-1] && !visited[x][y+1]) {
		visited[x][y] = false;
		return;
	}
	
	result.push_back({x, y});
	
	if(x == n-1 && y == n-1) {
		// optimization #2
		if(result.size() != n*n) {
			visited[x][y] = false;
			result.pop_back();
			return;
		}
		++answer;
	}
	
	// optimization #1
	if(result.size() != 1)
		backtrack(x, y+1);
		
	backtrack(x-1, y);
	backtrack(x+1, y);
	backtrack(x, y-1);
	
	visited[x][y] = false;
	result.pop_back();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n;
	visited.resize(n, vector<bool>(n, false));
	
	backtrack(0, 0);
	
	cout << answer*2 << "\n";
	
	cout<<"Time elapsed: "<<(double)(clock()-clk)/CLOCKS_PER_SEC << "\n";
	
	return 0;
}
