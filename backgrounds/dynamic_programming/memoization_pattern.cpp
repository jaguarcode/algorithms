/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

/**
 * 1. 항상 기저 사례를 먼저 처리. 입력이 범위를 벗어난 경우 등을 기저 사례로 처리. 
 * 2. 함수의 반환값이 항상 0 이상이라는 점을 활용. cache[][]값을 모두 -1로 초기화.
 *    만약, 음수의 경우도 있다면 못씀
 * 3. 반환값은 cache[][]에 대한 참조형
 * 4. memset() 초기화 (편함?)
 * 
 **/

// 전부 -1로 초기화
int cache[2500][2500];
// a와 b는 각각 [0, 2500] 구간 안의 정수
// 반환값은 항상 int형 안에 들어가는 음이 아닌 정수
int someObscureFunction(int a, int b) {
    // 기저 사례 처리
    if(...) return ...;
    // (a, b)에 대한 답을 구한 적이 있으면 곧장 반환
    int& ret = cache[a][b];
    if(ret != -1) return ret;
    // 여기에서 답을 계산
    ...
    return ret;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	// memset()을 이용하여 cache 배열을 초기화한다.
    memset(cache, -1, sizeof(cache));
	
	return 0;
}
