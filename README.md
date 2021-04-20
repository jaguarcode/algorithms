
# No Rules. Only Algorithms.

### Feynman Algorithm = A
1. Write down the problem. 
2. Think real hard.
3. Write down the solution.

### How to solve It = B
1. 문제를 이해한다.
2. 어떻게 풀지 계획을 세운다.
3. 계획을 수행해서 문제를 해결한다.
4. 어떻게 풀었는지 돌아보고, 개선할 방법이 있는지 찾아본다.

### 6 Steps = A + B
1. 문제를 읽고 이해한다.
2. 문제를 익숙한 용어로 재정의한다.
3. 어떻게 해결할지 계획을 세운다.
4. 계획을 검증한다.
5. 프로그램으로 구현한다.
6. 어떻게 풀었는지 돌아보고, 개선할 방법이 있는지 찾아본다.

### Algorithm Self-study Curriculum

* 알고리즘과 입/출력
  - ~~시간복잡도~~
  - ~~입/출력을 받는 방법~~
* 자료구조I
  - ~~스택~~
  - ~~큐~~
  - ~~덱~~
  - ~~문자열~~
* 다이나믹 프로그래밍I
  - ~~나머지 연산~~
* 수학I
  - ~~최대 공약수와 최소 공배수~~
  - ~~소수~~
  - ~~소인수분해~~
  - ~~진법 변환~~
  - ~~팩토리얼~~
* 정렬
  - ~~STL의 Sort를 응용하는 방법~~
  - ~~O(NlgN) 정렬 알고리즘~~
  - ~~퀵 소트와 머지 소트는 '분할 정복' 챕터~~
  - 힙 소트는 '자료구조 2' 챕터 
* 그래프I
  - 그래프를 저장하는 방법 세 가지 - 인접 행렬, 인접 리스트, 간선 리스트
  - 인접 리스트: 시간과 공간이 더 효율적
  - 효율적인 알고리즘 구현을 위해서 STL의 vector를 사용해서 인접 리스트를 구현
  - 간선 리스트라는 자료구조
  - 그래프의 탐색 - DFS / BFS
  - DFS와 BFS의 응용 - 연결 요소 / 이분 그래프
  - 그래프에서 가장 중요한 것 => 문제를 그래프로 모델링
  - 그래프 모델링을 연습하기 위해서 사이클을 찾는 연습
  - 이차원 배열 상에서 플로드 필 알고리즘
* 트리I
  - 트리를 순회하는 방법: 프리 오더, 인 오더, 포스트 오더
  - 그래프와 마찬가지로 트리를 저장하는 방법 세 가지
  - 트리의 부모에 대한 내용과 트리의 지름
* 그리디 알고리즘
  - 어렵지만 풀 수 있다
  - 증명이 중요
  - 잘하는 방법은 다양한 문제를 푸는 것 
* 분할정복
  - 문제를 분할한 다음 합쳐서 문제를 푸는 알고리즘
  - 대표: 이분 탐색 알고리즘 / 머지 소트 / 퀵 소트
  - 가장 가까운 두 점을 찾는 방법: 분할 정복 알고리즘의 하이라이트
* 이분탐색으로 정답찾기	
  - 정렬된 리스트에 어떤 수가 있는지 없는지를 조사하는 알고리즘
  - 주로, 정답을 구하기는 어려운데 정답을 검증하기 쉬운 경우에 이 알고리즘을 사용
* 완전탐색I (모든 경우)	
  - 여섯 가지
	  - 부르트 포스(Brute Force)
	  - N중 for문을 이용해서 문제를 푸는 방법
	  - 순열을 이용해서 모든 경우를 중복 없이 다 해보는 방법
	  - 가장 중요한 알고리즘 중의 하나인 BFS를 이용해서 모든 경우를 다 해보는 방법
	  - 재귀 호출을 이용해서 백트래킹
	  - 비트마스크를 이용해서 모든 경우를 중복 없이 다 해보는 방법
* 완전탐색II
  - 정답이 될 수 있는 것만 다 해보는 (일부 경우만 다 해보는) 알고리즘
  - 완전 탐색 1에서 배운 BFS를 덱을 사용해서 하는 방법
  - 탐색의 규모가 너무 큰 경우에 문제의 크기를 절반으로 나누어서 푸는 중간에서 만나는 알고리즘 (Meet in the Middle) 알고리즘
* 자료구조II
  - 스택을 조금 더 화려하게 사용
  - 그래프 알고리즘 중에서 크루스칼을 배울 때 필요한 Disjoint-set
  - 비트마스크
  - 힙 - 최대 힙과 최소 힙 / 힙을 구현, 힙 소트
  - 이진 검색 트리 (BST)
* 다이나믹 프로그래밍II
* 수학II
  - 다른 문제를 풀 때 필요한 경우가 많아서 배우는 부분
  - a^b 제곱 연산
  - 분할 정복 알고리즘을 이용해서 구하는 방법
  - 이진수의 원리를 이용해서 구하는 방법
  - 행렬
  - 피보나치 - 피보나치 수를 구하는 다양한 방법, 피사노 주기, 피보나치 수의 다양한 성질, 피보나치 수를 행렬을 이용해서 구하는 방법
  - 이항 계수 - 파스칼의 삼각형
  - 카탈란 수
  - 오일러 피 함수
  - 두 수를 나눌 때, 나머지 연산을 어떻게 해야하는지 배움
  - 확장 유클리드 알고리즘
  - 순열 - 다음 순열 / 이전 순열 / 모든 순열 / 순열의 순서
* 그래프 알고리즘II
  - 위상 정렬
  - 최소 스패닝 트리 (MST) - 프림 / 크루스칼
  - 최단 경로 알고리즘 -벨만 포드 알고리즘 / 다익스트라 알고리즘 / 플로이드 와샬 알고리즘
* 트리II
  - 가장 가까운 공통 조상(LCA) - 직관적 구현 / 다이나믹 프로그래밍
  - 임의의 두 정점 사이의 거리를 BFS 알고리즘보다 빠르게 구하는 방법
* 구간의 최소값 구하기
  - 그냥 다 해보는 방법
  - 이차원 배열에 저장해서 구하는 방법
  - 루트 N으로 나눠서 구하는 방법 (sqrt decomposition)
  - 다이나믹 프로그래밍을 이용해서 구하는 방법
  - 세그먼트 트리를 이용해서 구하는 방법
  - 슬라이딩 윈도우 알고리즘 
* 구간의 합 구하기
  - 누적합을 이용
  - 세그먼트 트리를 이용
  - 펜윅 트리(바이너리 인덱스 트리)를 이용
  - 구간을 업데이트하는 경우: 세그먼트 트리 나중에 업데이트 하기 (Segment Tree Lazy Propagation)
  - 세그먼트 트리
  - BIT 
* 세그먼트 트리 활용하기
  - 구간의 최소값과 합을 구할 때 사용
  - 분할 정복과 함께 세그먼트 트리를 사용
  - 최소값을 찾는 방법을 이용해서 K번째를 찾는 방법 
* 다이나믹 프로그래밍III
  - 비트마스크를 이용해 상태를 나타내고 그 상태를 다이나믹에 이용
  - 한 문제를 5가지 서로 다른 점화식으로 풀기
* 네트워크 플로우
  - 네트워크 플로우: 가장 중요한 알고리즘
  - 최대 유량을 구하는 두 가지 알고리즘 - Ford-Fulkerson / Edmond-Karp
  - 이분 매칭, 민 컷, 최소 버텍스 커버, 최대 독립 집합
  - 그래프 모델링을 연습
* 최소 비용 유량 (MCMF)
  - 최대 유량 문제에서 최소 비용문제가 추가되면 최소 비용 유량 문제
  - 그래프 모델링하는 연습
* 그래프 알고리즘III
  - 오일러 회로를 구하는 방법
  - 강한 연결 요소 (SCC)을 구하는 Kosaju's Algorithm과 Tarjan's Algorithm
  - DFS Tree
  - Tarjan's Algorithm 을 응용해 단절점과 단절선을 구하는 방법
  - 2-SAT 문제 
* 다이나믹 프로그래밍IV
  - 트리 다이나믹
  - 왼쪽과 오른쪽을 왔다갔다 하면서 푸는 다이나믹
  - 다이나믹 점화식을 통해서 정답을 역추적하는 방법
  - 확률 다이나믹
  - 왼쪽과 오른쪽에서 시작해서 가운데로 모이는 다이나믹
* 문자열 알고리즘
  - 문자열 매칭 알고리즘: KMP, Trie, Aho-corasick, Suffix Array
* 기하 알고리즘
  - 원, 직선, 선분과 같은 도형에 대한 내용
  - 다각형에 대한 내용
  - CCW 알고리즘: 선분의 교차를 판별하는 방법
  - 어떤 점이 다각형의 내부에 있는지 아닌지, 다각형의 넓이를 구하는 방법
  - 볼록 껍질(Convex Hull)을 구하는 방법인 그라함 스캔(Graham Scan)
  - 라인 스위핑 알고리즘(Line Sweeping Algorithm) - 가장 가까운 두 점
  - 로테이핑 캘리퍼 알고리즘(Rotating Calipers) - 가장 먼 두 점
  - 겹치는 선분 문제
  - 직사각형 N개의 합집합 
* 알고리즘 게임
  - 조합 게임(Combinatorial Game) 문제 중에서 Impartial Game 문제를 푸는 방법 
  - 돌 게임(Subtraction Game)
  - 님 게임 (Nim Game)
  - The Sprague-Grundy Function을 이용해 조합 게임 문제를 푸는 방법
  - 다양한 님 게임 변형 문제의 Grundy Number
