#include <iostream>
using namespace std;

int main(void) {
int a,b,c,d,e, result;
    cin >> a>>b;
    result = a * b;
    c = a*(b%10);
    d= a*((b/10)%10);
    e= a*(((b/10)/10)%10);
    cout << c << "\n" << d << "\n" << e << "\n"<< result <<endl;
	return 0;
}
