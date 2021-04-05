/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int tt;
	cin >> tt;
	while(tt--) {
        string a, b;
        cin >> a >> b;
        size_t n = a.size();
        size_t m = b.size();
        a = ' ' + a;
        b = ' ' + b;

        vector<vector<int>> dp (n+1, vector<int>(m+1, 0));
        int answer = 0;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                if(a[i] == b[j]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                    answer = max(answer, dp[i][j]);
                }
            }
        }
        cout << n + m - 2*answer << "\n";

	}
	
	return 0;
}
