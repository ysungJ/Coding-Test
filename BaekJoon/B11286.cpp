//백준 11286
#include <iostream>
#include <vector>
#include<algorithm>
#include <queue>
using namespace std;

struct compare {
	bool operator()(int o1, int o2) {
		int first_abs = abs(o1);
		int second_abs = abs(o2);

		if (first_abs == second_abs) {
			return o1 > o2; //절댓값이 같을 땐 음수 우선 정렬
		}
		else {
			return first_abs > second_abs; //절댓값 기준으로 정렬 
		}
	}
};


int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//우선 순위 큐 선언 방식 ; <자료형, 구현체, 비교함수명>
	priority_queue<int, vector<int>,compare> myQ;
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int request;
		cin >> request;

		if (request == 0) {
			if (myQ.empty()) {
				cout << "0\n";
			}
			else {
				cout << myQ.top() << '\n';
				myQ.pop();
			}
		}
		else {
			myQ.push(request);
		}
	}
	
	return 0;
}
