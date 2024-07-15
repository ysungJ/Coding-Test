#include<iostream>
using namespace std;

int main(void)
{
	int a,b;
    int count = 0;
     cin >> a;
    
    b = a;
    
   do{
       b= (b%10) * 10 +((b/10)+(b%10)) % 10;
       
       count++;
       
   }while(a != b);{
       cout << count ; 
   }

	return 0;
}
