#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(void)
{
	string A, B, result;
	cin >> A >> B;

	for (int i = 2; i >= 0; i--) {
	
		if (A[i] == B[i]) {
			continue;
		}
		if (A[i] > B[i]) {
			result = A;
		}
		else
		{
			result = B;
		}
		break;



	}
	cout << result[2] << result[1] << result[0];
	return 0;

}
