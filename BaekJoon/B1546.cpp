#include<iostream>

using namespace std;

int main(void) {

	int N = 0;
	int A[1000];

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> A[i];

	}
	long sum = 0;
	long max = 0;

	for (int j = 0; j < N; j++) {
		if (A[j] > max) {
			max = A[j];
		}
		sum = sum + A[j];

	}
	double result;
	
	result = sum * 100.0 / max / N;

	cout << result << endl;
	return 0; 

}
