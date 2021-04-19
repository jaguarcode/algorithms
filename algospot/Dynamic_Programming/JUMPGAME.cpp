/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

int n, board[100][100];
int cache[100][100];

int jump(int y, int x) {
    if(y >= n || x >= n) return 0;
    if(y == n-1 && x == n-1) return 1;
    int& ret = cache[y][x];
    if(ret != -1) return ret;
    int next = board[y][x];
    return ret = (jump(y+next, x) || jump(y, x+next)); 
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int tt;
    cin >> tt;
    while(tt--) {
        
        memset(cache, -1, sizeof(cache));
        
        cin >> n;
        for(int y = 0; y < n; ++y)
            for(int x = 0; x < n; ++x)
                cin >> board[y][x];

        if(jump(0, 0) == true) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
	
	return 0;
}
