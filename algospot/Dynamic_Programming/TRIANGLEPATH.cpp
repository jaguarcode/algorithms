/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

int n, triangle[100][100];

// 무식하게 메모이제이션 사용하기
// (y, x) 위치까지 내려오기 전에 만난 숫자들의 합이 sum일 때
// 맨 아래줄까지 내려가면서 얻을 수 있는 최대 경로를 반환한다.
const int MAX_NUMBER = 256;
int cache[100][100][MAX_NUMBER*100+1];
int path1(int y, int x, int sum) {
    // 기저사례: 맨 아래 줄까지 도달했을 경우,
    if(y == n-1) return sum + triangle[y][x];
    // 메모이제이션
    int& ret = cache[y][x][sum];
    if(ret != -1) return ret;
    sum += triangle[y][x];
    return ret = max(path1(y+1, x+1, sum), path1(y+1, x, sum));
}

// (y, x) 위치부터 맨 아래줄까지 내려가면서 얻을 수 있는 최대 경로의 합을 반환한다.
int cache2[100][100];
int path2(int y, int x) {
    // 기저사례
    if(y == n-1) return triangle[y][x];
    // 메모이제이션
    int& ret = cache2[y][x];
    if(ret != -1) return ret;
    return ret = max(path2(y+1, x), path2(y+1, x+1)) + triangle[y][x];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int tt;
    cin >> tt;
    while(tt--) {
        cin >> n;
        memset(cache2, -1, sizeof(cache2));
        for(int y = 0; y < n; ++y)
            for(int x = 0; x < y+1; ++x)
                cin >> triangle[y][x];
        cout << path2(0, 0) << "\n";
    }
	
	return 0;
}
