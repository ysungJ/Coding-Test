#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int TF;
    string s;
    
    cin>> TF;
    for(int i = 0; i < TF; i++){
        cin >> s;
        int sum, cnt;
        sum = cnt = 0;
        for(int j = 0; j <s.length(); j++){
            if(s[j] == 'O')cnt++;
            else cnt = 0;
            sum +=cnt;
        }
    cout << sum << endl;
    }
    
	return 0;
}
