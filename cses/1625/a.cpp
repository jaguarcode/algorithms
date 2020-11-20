/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int n = 7;
ll answer = 0;
vector<vector<bool>> visited;
vector<pair<ll, ll>> result;

vector<vector<char>> col;

void backtrack(ll x, ll y) {
	if(x < 0 || y < 0 || x > n-1 || y > n-1) return;
	if(visited[x][y]) return;
	if(col[x][y] != '?') return;
	visited[x][y] = true;
	
	// optimization #3
	if((y == 0 || y == n-1) && x-1 >= 0 && x+1 <= n-1 
		&& !visited[x-1][y] && !visited[x+1][y]) {
		visited[x][y] = false;
		return;
	}
	
	if((x == 0 || x == n-1) && y-1 >= 0 && y+1 <= n-1 
		&& !visited[x][y-1] && !visited[x][y+1]) {
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
	
	string s;
	cin >> s;
	
	visited.resize(n, vector<bool>(n, false));
	int r = 0;
	for(int i = 0; i < n; i++) {
		vector<char> row(n, '?');
		for(int j = 0; j < n; j++)
			row[j] = s[j+(r*n)];
		col.push_back(row);
		r++;
	}
		
	backtrack(0, 0);
	
	cout << answer*2 << "\n";
	
	return 0;
}
