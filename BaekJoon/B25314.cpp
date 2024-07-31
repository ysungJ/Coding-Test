#include <iostream>
#include<string>
using namespace std;

int main(void)
{
	int N; // N은 4의 배수 4 <= N <= 1000;
	cin >> N;
	for (int i = 0; i < N / 4; i++) {

		cout << "long ";
		if (i == N / 4 - 1)
			cout << "int";
	}

	return 0;

}
