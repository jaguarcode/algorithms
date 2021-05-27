/*
이분 탐색 문제 유형은 두가지

어떤 함수 bool f(x)가 있을 때,
경우 1. f(x)가 참이 되는 최솟값 x 구하기
경우 2. f(x)가 참이 되는 최댓값 x 구하기

f(x)는 x가 문제의 조건을 만족시키는 지 구하는 함수

예를 들어, 조건을 만족시키는 최댓값을 구하라라는 문제가 있다면
f(x) = { 최소 x가 될 수 있으면 return true; }로 함수를 정의하고, 경우 2.의 코드 사용
*/

// 탐색 범위 = [mn, mx]
// 만약 불가능한 경우가 없다면 (최소 하나의 해가 [mn, mx]사이에 있다는 게 보장된다면)
// 경우 1, 2 전부 lo = mn, hi = mx로 통일해도 됨

// 경우 1 -> [lo, hi) 구간에서 이분 탐색
int lo = mn, hi = mx + 1;
while (lo != hi) {
    int mid = (lo + hi) >> 1;   // lo + hi에서 오버플로우 조심
    f(mid) ? hi = mid : lo = mid + 1;
}

if (lo == mx + 1) IMPOSSIBLE; // 가능한 해가 없음
else answer = lo;


// 경우 2 -> (lo, hi] 구간에서 이분 탐색
int lo = mn - 1, hi = mx;
while (lo != hi) {
    int mid = (lo + hi + 1) >> 1;
    f(mid) ? lo = mid : hi = mid - 1;
}

if (lo == mn - 1) IMPOSSIBLE;
else answer = lo;