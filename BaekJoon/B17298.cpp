//스택으로 수열  
#include <iostream>
#include <vector>
#include<algorithm>
#include <stack>
using namespace std;


int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector <int> A(n, 0);
	vector <int> ans(n, 0);

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	stack<int> myStack;
	myStack.push(0);

	for (int i = 1; i < n; i++) {
		//스택이 비지 않고 현재 수열이 스택 top 위치의 값보다 크면 
		while (!myStack.empty() && A[myStack.top()] < A[i])
		{
			ans[myStack.top()] = A[i]; //정답 배열에 오큰수를 현재 수열로 저장
			myStack.pop();
		}
		myStack.push(i); //신규 데이터 push()
	}

	while (!myStack.empty()) {
		//반복문을 다 돌고도 스택이 비지 않았으면 빌 떄 까지 
		ans[myStack.top()] = -1;
		myStack.pop();
	}
	//정답 출력
	for (int i = 0; i < n; i++) {
		cout << ans[i] << ' ';
	}

	return 0;
}
