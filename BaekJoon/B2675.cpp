#include <iostream>
#include <string>
using namespace std;

int main(void){
    int a; 
    cin >> a;
    for(int i = 0 ; i < a ; i++){
        int b;
        string s;
        cin >> b;
        cin >> s;
        
        for(int j = 0 ; j < s.length(); j++)
        {
            for(int k = 0; k < b; k++)
            {
                cout << s[j];
            }
        }
        cout << endl;
    }
    return 0;
}
