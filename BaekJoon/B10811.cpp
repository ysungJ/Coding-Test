#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(void)
{
	int n, m;
	int a, b;
	int array[100] = {};
	//입력
	cin >> n >> m;


	for (int i = 0; i < n; i++)
	{
		array[i] = i+1;
	
	}
	while (m--) {
	
		cin >> a >> b;
		reverse(array + a - 1, array + b);

	}
	for (int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}

	return 0;

}
