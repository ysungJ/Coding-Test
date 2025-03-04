#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	int a[6] = {0};
	int b[6] = {1,1,2,2,2,8};
	
	for(int i = 0 ; i < 6; i++){
	    cin >> a[i];
	    cout << b[i]- a[i] << ' '; 
	    
	}
    return 0;
}
