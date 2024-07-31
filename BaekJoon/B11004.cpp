//백준 11004
#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;
void Q_sort(vector<int>& a, int s, int e, int k);
int partition(vector<int>& a, int s, int e);
void swap(vector<int>& a, int i, int j);


int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;
	vector<int> a(n, 0);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	Q_sort(a, 0, n - 1, k - 1);
	cout << a[k-1];
}

void Q_sort(vector<int>& a, int s, int e, int k) {
	int pivot = partition(a, s, e);
	if (pivot == k) { //k가 피벗이면 더는 구할 필요 없다
		return;
	}
	else if (k < pivot) { // k가 피벗보다 작으면 왼쪽 그룹만 정렬 수행
		Q_sort(a, s, pivot - 1, k);
	}
	else { // k가 피벗보다 크면 오른쪽 그룹만 정렬 수행
		Q_sort(a, pivot + 1, e, k);
	}
}
int partition(vector<int>& a, int s, int e) {
	if (s + 1 == e) {
		if (a[s] > a[e]) {
			swap(a, s, e);
		}
		return e;
	}

	int m = (s + e) / 2;
	swap(a, s, m);//중앙 값을 1번째 요소로 이동
	int pivot = a[s];
	int i, j;
	i = s + 1;
	j = e;

	while (i <= j) {
		while (pivot < a[j] && j>0) { // 피벗보다 작은 수가 나올때까지 j에 -1
			j--;
		}
		while (pivot > a[i] && i < a.size() - 1) { //피벗보다 큰 수가 나올때까지 i에 +1
			i++;
		}
		if (i <= j) {
			swap(a, i++, j--); // 찾은 i와 j를 교환
		}
	}
	// i == j 피벗의 값을 양쪽으로 분리한 가운데에 오도록 설정
	a[s] = a[j];
	a[j] = pivot;
	return j;
}


void swap(vector<int>& a, int i, int j) {
	int temp;
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;

}
