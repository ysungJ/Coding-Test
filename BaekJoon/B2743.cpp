#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
int main(void)
{
 string a;
 cin >> a;
 int length = 0;
 
 for (int i = 0; a[i]; i++)
 {
     length += 1 ;
     
 }
 cout << length;
 
    return 0;
}
