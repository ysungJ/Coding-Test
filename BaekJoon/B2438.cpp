#include <iostream>
using namespace std;

int main(void) {
	int a, sum;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j <= i; j++) {
		cout << "*";
	}
		cout << "\n";

	}
	
	return 0;
}
