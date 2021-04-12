#include <bits/stdc++.h>
using namespace std;

int answer = 0;
int n;
vector<int> column, diag1, diag2;

/*
                     [column]  [diag1]  [diag2]
                         x       x+y    x-y+n-1
    y == 0, x == 0       0        0        3
            x == 1       1        1        4
            x == 2       2        2        5
            x == 3       3        3        6
    y == 1, x == 0       0        1        2
            x == 1       1        2        3
            x == 2       2        3        4
            x == 3       3        4        5
    y == 2, x == 0       0        2        1
            x == 1       1        3        2
            x == 2       2        4        3
            x == 3       3        5        4
    y == 3, x == 0       0        3        0
            x == 1       1        4        1
            x == 2       2        5        2
            x == 3       3        6        3
*/

void search(size_t y) {
    if(y == n) {
        answer++;
        return;
    }

    for(int x = 0; x < n; x++) {
        if(column[x] == 1 || diag1[x+y] == 1 || diag2[x-y+n-1] == 1) continue;
        column[x] = diag1[x+y] = diag2[x-y+n-1] = 1; // mark as approach
        search(y+1);
        column[x] = diag1[x+y] = diag2[x-y+n-1] = 0; // backtrack
    }
}

int main() {

    cin >> n;

    column.resize(n*n);
    diag1.resize(n*n);
    diag2.resize(n*n);

    search(0);

    cout << answer << "\n";

    return 0;
}