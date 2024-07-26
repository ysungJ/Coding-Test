//백준 2750
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; //정렬할 수의 개수
	cin >> n;
	vector<int> array(n, 0); //수를 저장할 배열

	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
		
			if (array[j] > array[j + 1]) {
				int temp;
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "\n";
	}
	return 0;
}
