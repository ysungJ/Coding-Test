#include <iostream>
#include <vector>
#include<algorithm>
#include <queue>
using namespace std;


int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int> myQ;
	int n;
	cin >> n;

	//카드를 큐에 저장
	for (int i = 1; i <= n; i++)
	{
		myQ.push(i);
	}
	//카드가 1장 남을 때 까지
	while (myQ.size() > 1) {
		myQ.pop(); //맨 위 카드를 버림
		myQ.push(myQ.front()); //맨 위 카드를 가장 아래 카드 밑으로 이동 
		myQ.pop();
	}
	cout << myQ.front();
	return 0;
}
