#include <iostream>
using namespace std;

int main(void) {
	int a;
	cin >> a;

	for (int i = 1; i <= a; i++)
	{
		for (int j = 0; j < a - i; j++)
			cout << " ";
		for (int j = 0; j < a - (a - i); j++)
		
			cout << "*";
			cout << endl;

	}
	
	return 0;
}
