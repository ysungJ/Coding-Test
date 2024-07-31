#include <iostream>
using namespace std;

int main(void){
    int n = 0;
    cin >> n;
    int s[1000];
    s[1]=1;
    s[2]=2;
    for (int i = 3; i <=n; i++){
        s[i]=(s[i-1]+s[i-2])%10007;
    }
   cout << s[n]<<endl; 
    return 0;
}
