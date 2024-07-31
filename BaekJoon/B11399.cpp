//백준 11399
#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int np; //사람의 수 
	cin >> np; 
	vector<int> Array(np, 0); // 자리를 구분하면서 저장할 배열
	vector<int> s(np, 0); // 합 배열 Array 각 사람의 인출 완료를 위해 필요한 시간을 저장

	for (int i = 0; i < np; i++) {
		cin >> Array[i];
	}

	for (int i = 1; i < np; i++) { //삽입 정렬
		int insertPointer;
		int insertValue;

		insertPointer = i;
		insertValue = Array[i];
		
		for (int j = i - 1; j >= 0; j--) {
			if (Array[j] < Array[i]) {
				insertPointer = j + 1;
				break;
			}
			if (j == 0) {
				insertPointer = 0;
			}
		}
		for (int j = i; j > insertPointer; j--) {
			Array[j] = Array[j - 1];
		}
		Array[insertPointer] = insertValue;
	}

	s[0] = Array[0]; //합 배열 만들기 
	
	for (int i = 1; i < np; i++) {
		s[i] = s[i - 1] + Array[i];
	}

	int sum = 0; //합 배열 총합 구하기
	
	for (int i = 0; i < np; i++) {
		sum = sum + s[i];
	}

	cout << sum;
	return 0;
}
