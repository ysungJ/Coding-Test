#include <iostream>
using namespace std;

int main(void) {
	int Grade;
	cin >> Grade;

	if (Grade >= 90)
		cout << "A" << endl;
	else if (Grade >= 80)
		cout << "B" << endl;
	else if (Grade >= 70)
		cout << "C" << endl;
	else if ( Grade >= 60)
		cout << "D" << endl;
	else 
		cout << "F" << endl;
	
	return 0;
}
