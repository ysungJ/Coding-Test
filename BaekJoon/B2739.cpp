#include <iostream>
using namespace std;

int main(void) {
	int n, i;
	cin >> n;
	if (n < 1 || n > 9)
		return 0;
	for (i = 1; i <= 9; i++)
	{
		cout << n << " * " << i << " = " << n * i << endl;
	}

	return 0;
}
