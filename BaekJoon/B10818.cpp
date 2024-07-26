#include <iostream>
#include <algorithm>
using namespace std;
 
int main(void) {
	ios_base::sync_with_stdio(0);
	int a;
	cin >> a;
 
int array[1000001];
for(int i = 0 ; i < a; i ++){
	cin >> array[i];
 
}
sort(array, array + a );
 
cout << array[0] << " " << array[a-1];
    
	return 0;
}
