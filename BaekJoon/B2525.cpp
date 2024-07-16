#include <iostream>
using namespace std;
 
int main(void) {
    int h,m,f;
    cin >> h >> m >> f;
    h += f / 60;
    m += f % 60;
    
    if( m >= 60){
        h += 1;
        m -= 60;
    }if(h >= 24){
        h -= 24;
    }
    cout << h << " " << m;
   
	return 0;
}
