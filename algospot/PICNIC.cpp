/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

int n;
bool areFriends[10][10];
bool taken[10];

// taken[i] = i번째 학생이 짝을 이미 찾았으면 true, 아니면 false
int countPairings(bool taken[10]) {
    // 남은 학생들 중 가장 번호가 빠른 학생들을 찾는다.
    int firstFree = -1;
    for(int i = 0; i < n; ++i) {
        if(!taken[i]) {
            firstFree = i;
            break;
        }
    }
    // 기저 사례: 모든 학생이 짝을 찾았으면 한 가지 방법을 찾았으니 종료한다.
    if(firstFree == -1) return 1;
    int ret = 0;
    // 해당 학생과 짝지을 학생을 결정한다.
    for(int pairWith = firstFree+1; pairWith < n; ++pairWith) {
        if(!taken[pairWith] && areFriends[firstFree][pairWith]) {
            taken[firstFree] = taken[pairWith] = true;
            ret += countPairings(taken);
            taken[firstFree] = taken[pairWith] = false;
        }
    }
    return ret;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int tt;
    cin >> tt;

    int answer;
    for(int i = 0; i < tt; i++) {
        int m;
        cin >> n >> m;
        
        for(int i = 0; i < 10; i++)
            for(int j = 0; j < 10; j++)
                areFriends[i][j] = false;

        for(int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            areFriends[a][b] = areFriends[b][a] = true;
        }
        
        answer = countPairings(taken);
        cout << answer << "\n";
    }

	return 0;
}
