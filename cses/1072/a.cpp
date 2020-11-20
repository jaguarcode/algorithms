/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n;
ll answer = 0;
vector<vector<bool>> visited;
vector<pair<ll, ll>> result;

void search(ll x, ll y) {
	if(x < 0 || y < 0 || x > n-1 || y > n-1) return;
	if(visited[x][y]) return;
	visited[x][y] = true;
	/*
	// up
	if(x-1 >= 0 && x+1 <= n-1 && y-2 >= 0 && y+2 <= n-1
		&& !visited[x+1][y-2] && !visited[x-1][y-2]) {
		visited[x][y] = false;
		return;
	}
	
	// down
	if(x-1 >= 0 && x+1 <= n-1 && y-2 >= 0 && y+2 <= n-1
		&& !visited[x+1][y+2] && !visited[x-1][y+2]) {
		visited[x][y] = false;
		return;
	}
	
	// left
	if(x-2 >= 0 && x+2 <= n-1 && y-1 >= 0 && y+1 <= n-1
		&& !visited[x-2][y+1] && !visited[x-2][y-1]) {
		visited[x][y] = false;
		return;
	}
	
	// right
	if(x-2 >= 0 && x+2 <= n-1 && y-1 >= 0 && y+1 <= n-1
		&& !visited[x+2][y+1] && !visited[x+2][y-1]) {
		visited[x][y] = false;
		return;
	}
	*/

	result.push_back({x, y});
	
	if(x == n-1 && y == n-1) {
		if(result.size() != n*n) {
			visited[x][y] = false;
			result.pop_back();
			return;
		}
		++answer;
	}
	
	if(result.size() != 1)
		search(x, y+1);
	search(x-1, y);
	search(x+1, y);
	search(x, y-1);
	
	visited[x][y] = false;
	result.pop_back();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n;
	visited.resize(n, vector<bool>(n, false));
	
	search(0, 0);

	cout << answer*2 << "\n";
	
	return 0;
}
