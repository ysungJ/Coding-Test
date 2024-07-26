#include <iostream>
using namespace std;

int main(void) {
	int num, sum = 0;
    int arr[42] ={0,};
    for(int i = 0; i < 10; i++){
        cin >> num;
        if(!arr[num % 42]++){
            sum ++;
    }
    }
    cout << sum ;
    
	return 0;
}
