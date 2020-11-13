/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

vector<char> directions = {'D','U','L','R'};
vector<char> grid;
int n;
int cnt = 0;
void search(int k) {
	if(k == n) {
		cnt++;
		return;
	} else {
		for(int x = 0; x < n; x++) {
			for(int y = 0; y < n; y++) {
				for(int i = 0; i < (int)directions.size(); i++) {
					if(grid[x+(y*n)] == 'D' || grid[x+(y*n)] == 'U' 
						|| grid[x+(y*n)] == 'L' || grid[x+(y*n)] == 'R') continue;
					grid[x+(y*n)] = directions[i];
					search(k+1);
					grid[x+(y*n)] = '?';
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;
	grid.resize(n*n);
	
	search(0);
	
	cout << cnt << "\n";
	
	for(auto c : grid) cout << c << " ";
	cout << "\n";
		
	return 0;
}
