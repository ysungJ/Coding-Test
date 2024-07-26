#include <iostream>
using namespace std;

int main(void) {
	int x, y;
	cin >> x >> y;
	if (y < 45) {
		y += 15;
		x--;
	}
	else
	
		y -= 45; if (x < 0)
			x = 23;
		cout << x << " " << y << endl;


	return 0;
}
