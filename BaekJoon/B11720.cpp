#include <iostream>
using namespace std;


int main(void) {

	int N = 0;
	string Num;
	
	cin >> N;
	cin >> Num;

	int sum = 0;
	for (int i = 0; i < Num.length(); i++) {
	
		sum += Num[i] - '0';

	}

	cout << sum << endl;

	return 0;
}
