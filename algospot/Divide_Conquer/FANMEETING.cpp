/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

int hugs(const string& members, const string& fans) {
    int N = members.size(), M = fans.size();
    vector<int> A(N), B(M);
    for(int i = 0; i < N; ++i) A[i] = (members[i] == 'M');
    for(int i = 0; i < M; ++i) B[i] = (fans[i] == 'M');
    vector<int> C = karatsuba(A, B);
    int allHugs = 0;
    for(int i = N-1; i < M; ++i)
        if(C[i] == 0) ++allHugs;
    return allHugs;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int tt;
    cin >> tt;
    while(tt--) {
        string m, f;
        cin >> m >> f;
    }
	
	return 0;
}
