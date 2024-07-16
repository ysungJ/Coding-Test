#include <iostream>
using namespace std;

int main() {
	int in[9];
    int max = 0, pos = 0;
    
    for(int i = 0; i < 9; i++){
        cin >> in[i];
        if(max < in[i]){
            max = in[i];
            pos = i;
            
        }
    }
    cout << max << endl << pos+1;
	return 0;
}
