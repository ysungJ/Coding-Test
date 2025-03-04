#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
 int a;
 string b;
 
 cin >> a;
for (int i = 0; i < a; i++){
    
    cin >> b;
    int size = b.length();
    cout << b[0] << b[size-1] << endl; 
}
 
    return 0;
}
