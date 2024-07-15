#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<pair<int, int>> array(n);

	for (int i = 0; i < n; i++) {
		cin >> array[i].first;
		array[i].second = i;
	}

	sort(array.begin(), array.end()); //배열 a 정렬 시간 복잡도 : O (nlogn)
	int max;
	max = 0;

	for (int i = 0; i < n; i++) {
	//정렬 전 인덱스 - 정렬 후 인덱스를 계산한 값중 최대값을 찾아 저장
		if (max < array[i].second - i) {
			max = array[i].second - i;
		}
	}

	cout << max + 1;
	return 0;
}
