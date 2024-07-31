//최솟값 찾기 
#include <iostream>
#include <vector>
#include<algorithm>
#include <deque>
using namespace std;
typedef pair<int, int> Node;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, L;
	cin >> N >> L;
	deque<Node> mydeque;

	for (int i = 0; i < N; i++) {
	
		int now;
		cin >> now;
		//값을 들어올 떄 마다 정렬하지않고
		// 현재수 보다 큰값을 덱에세서 제거하여 시간복잡도를 줄임
		while (mydeque.size() && mydeque.back().first > now) {
			mydeque.pop_back();
		}
		mydeque.push_back(Node(now, i));
		//범위에서 벗어난 값은 덱에서 제거
		if (mydeque.front().second <= i - L) {
			mydeque.pop_front();
		}
		cout << mydeque.front().first << ' ';
	}
	return 0;
}
