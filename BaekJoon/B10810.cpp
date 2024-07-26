#include <iostream>
#include<string>
using namespace std;

int main(void)
{
	int n, m; //n개의 바구니와 m번의 넣을 공
	int i, j, k;// 각 넣는 방법
	int array[100] = {};
	cin >> n >> m;
	while (m--) {

		cin >> i >> j >> k;
		for (int a = i; a <= j; a++) {
			array[a] = k;
		}
	}
	for (int i = 1; i <= n; i++)
		cout << array[i] << ' ';

	return 0;

}
