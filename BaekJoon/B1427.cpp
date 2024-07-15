#include <iostream>
#include <vector>
#include<algorithm>
#include<string>
using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string strNum;
	cin >> strNum;
	vector<int> array(strNum.size(), 0);

	for (int i = 0; i < strNum.size(); i++) {
		array[i] = stoi(strNum.substr(i, 1));
	}

	for (int i = 0; i < strNum.length(); i++) {
		int MAX;
		MAX = i;
		for (int j = i + 1; j < strNum.length(); j++) {
			if (array[j] > array[MAX]) { //내림차순이므로 최댓값을 찾는다
				MAX = j;
			}
		}
		if (array[i] < array[MAX]) {
			int temp;
			temp = array[i];
			array[i] = array[MAX];
			array[MAX] = temp;
		}
	}
	for (int i = 0; i < array.size(); i++) {
		cout << array[i];
	}
	return 0;
}
