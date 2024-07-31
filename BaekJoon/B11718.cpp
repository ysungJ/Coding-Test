#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(void)
{
	string str = "";
	string input;
	while (1) {
		getline(cin, input);
		if (cin.eof() == 1) {
			break;

		}
		str.append(input);
		str.append("\n");
	}
	cout << str;
	return 0;

}
