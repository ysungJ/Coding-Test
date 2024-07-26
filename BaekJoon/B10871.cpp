#include <iostream>
using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b;

	for (int i = 0; i <a; i++)
	{
		cin >> c;
		if (c < b) {
			cout << c << " ";
		}
	}
	cout << endl;
	return 0;
}
