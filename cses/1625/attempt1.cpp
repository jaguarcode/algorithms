/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;
vector<bool> col, col_l, col_r, col_d;
int n, cnt = 0;
void search(int x, int y) {
	if(n-1 == x && n-1 == y) {
		cnt++;
		return;
	} else {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				int index = i+(j*n);
				// condition check
				if(col[index] 
					|| (index-1 >= 0) ? col_l[index-1] : false
					|| (index+1 < n*n) ? col_r[index+1] : false
					|| (index+(j*n) < n*n) ? col_d[index+(j*n)] : false) continue;
				// set
				col[index] = true;
				(index-1 >= 0) ? col_l[index-1] = true : true;
				(index+1 < n*n) ? col_r[index+1] = true : true;
				(index+(j*n) < n*n) ? col_d[index+(j*n)] = true : true;
				// recursion
				search(x+1, y+1);
				// un-set
				col[index] = false;
				(index-1 >= 0) ? col_l[index-1] = false : true;
				(index+1 < n*n) ? col_r[index+1] = false : true;
				(index+(j*n) < n*n) ? col_d[index+(j*n)] = false : true;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n;
	col.resize(n*n);
	col_l.resize(n*n);
	col_r.resize(n*n);
	col_d.resize(n*n);
	
	search(0, 0);
	
	cout << cnt << "\n";
	
	return 0;
}
