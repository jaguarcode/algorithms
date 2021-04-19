/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

/** 
 * 와일드카드 문제를 해결하는 완전 탐색 알고리즘 
 **/
// 와일드카드 패턴 w가 문자열 s에 대응되는지 여부를 반환한다.
bool match(const string& w, const string& s) {
    // w[pos]와 s[pos]를 맞춰나간다.
    int pos = 0;
    while(pos < s.size() && pos < w.size() 
        && (w[pos] == '?' || w[pos] == s[pos]))
            ++pos;
    // 더이상 대응할 수 없으면 왜 whlie문이 끝났는지 확인한다.
    // 2. 패턴 끝에 도달해서 끝난 경우: 문자열도 끝났어야 대응된다.
    if(pos == w.size())
        return pos == s.size();
    // 4. *를 만나서 끝난 경우: *에 몇 글자를 대응해야 할지 재귀 호출하면서 확인한다.
    if(w[pos] == '*')
        for(int skip = 0; pos+skip <= s.size(); ++skip)
            if(match(w.substr(pos+1), s.substr(pos+skip))) 
                return true;
    // 이 외의 경우에는 모두 대응되지 않는다.
    return false;
}

/**
 * 와일드카드 문제를 해결하는 동적 계획법 알고리즘
 **/
// -1은 아직 답이 계산되지 않았음을 의미한다.
// 1은 해당 입력들이 서로 대응됨을 의미한다.
// 0은 해당 입력들이 서로 대응되지 않음을 의미한다.
int cache[101][101];
// 패턴과 문자열
string W, S;
// 와일드카드 패턴 W[w...]가 문자열 S[s...]에 대응되는지 여부를 반환한다.
bool matchMemoized(int w, int s) {
    // 메모이제이션
    int& ret = cache[w][s];
    if(ret != -1) return ret;
    // W[w]와 S[s]를 맞춰나간다.
    /*
    // O(n^3) 복잡도
    while(s < S.size() && w < W.size() &&
        (W[w] == '?' || W[w] == S[s])) {
            ++w;
            ++s;
    }
    */
    // O(n^2) 복잡도 - 재귀 이용 최적화
    if(s < S.size() && w < W.size() && (W[w] == '?' || W[w] == S[s]))
        return ret = matchMemoized(w+1, s+1);

    // 더이상 대응할 수 없다면 왜 while문이 끝났는지 확인한다.
    // 2. 패턴 끝에 도달해서 끝난 경우: 문자열도 끝났어야 한다.
    if(w == W.size()) return ret = (s == S.size());
    // 4. *를 만나서 끝난 경우: *에 몇 글자를 대응해야 할지 재귀 호출하면서 확인한다.
    /*
    // O(n^3) 복잡도
    if(W[w] == '*')
        for(int skip = 0; skip+s <= S.size(); ++skip)
            if(matchMemoized(w+1, s+skip))
                return ret = 1;
    */
    // O(n^2) 복잡도 - 재귀 이용 최적화
    if(W[w] == '*')
        if(matchMemoized(w+1, s) || (s < S.size() && matchMemoized(w, s+1)))
            return ret = 1;
    // 3. 이 외의 경우에는 모두 대응되지 않는다.
    return ret = 0;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int tt;
    cin >> tt;
    while(tt--) {
        cin >> W;
        int n;
        cin >> n;
        vector<string> result;
        for(int i = 0; i < n; ++i) {
            memset(cache, -1, sizeof(cache));
            cin >> S;
            if(matchMemoized(0, 0)) result.push_back(S);
        }

        sort(result.begin(), result.end());
        for(const auto& r : result) cout << r << "\n";
    }
	
	return 0;
}
