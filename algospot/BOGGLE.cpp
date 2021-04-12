/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

vector<string> board;

const int dx[8] = { -1, -1, -1, 1, 1, 1, 0, 0 };
const int dy[8] = { -1, 0, 1, -1, 0, 1, -1, 1 };

bool inRange(int y, int x) {
    if(y >= 0 && y < 5 && x >= 0 && x < 5) 
        return true;
    return false;
}

// 5x5의 보글 게임 판의 해당 위치에서 주어진 단어가 시작하는지를 반환
bool hasWord(int y, int x, const string& word) {
    // 기저 사례 1: 시작 위치가 범위 밖이면 무조건 실패
    if(!inRange(y, x)) return false;
    // 기저 사례 2: 첫 글자가 일치하지 않으면 실패
    if(board[y][x] != word[0]) return false;
    // 기저 사례 3: 단어 길이가 1이면 성공
    if(word.size() == 1) return true;
    // 인접한 여덟 칸을 검사한다.
    for(int direction = 0; direction < 8; ++direction) {
        int nextY = y + dy[direction], nextX = x + dx[direction];
        if(hasWord(nextY, nextX, word.substr(1)))
            return true;
    }
    return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
    int tt;
    cin >> tt;
    while(tt--) {
        for(int i = 0; i < 5; ++i) {
            string s;
            cin >> s;
            board.push_back(s);
        }

        int n;
        cin >> n;
        while(n--) {
            string word;
            cin >> word;

            bool found = false;
            for(int x = 0; x < 5; ++x) {    
                for(int y = 0; y < 5; ++y) {
                    if(hasWord(y, x, word)) { found = true; break; }
                }
                if(found) break;
            }

            cout << word << " ";
            if(found) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }

    }
	
	return 0;
}
