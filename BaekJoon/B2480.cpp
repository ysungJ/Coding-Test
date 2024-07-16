#include <iostream>
using namespace std;

int main(void) {
int a, b, c, sum = 0 , max = 0;
    cin >> a>> b>> c;
    if(a == b &&  b== c ){
       sum = 10000 +(a*1000);
    }
    else if( a == b || a == c || b == c){
       
        if(a==b|| a== c){
        sum = 1000 + a *100;}
    else sum = 1000+ b* 100;
    }
    else{max =a;
          if(b > a && b >c )
              max = b;
          else if(c>a && c > b) 
              max =c;
    sum = max * 100;
}
cout << sum << endl;
	return 0;
}
