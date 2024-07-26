#include <iostream>
#include<string>
using namespace std;

int main(void)
{
	int student[31] = { }; //학생의 수
	int n; //출석 번호
	
	for (int i = 0; i < 28; i++) { //출석한 학생
		cin >> n; //출석 번호 입력
		student[n] = n; //해당 인덱스에 저장 


	}
	for (int i = 1; i < 31; i++) {//모든 학생 조회
		if (student[i] == 0) {// 초기값 확인 후 변경 x면 
			cout << i << endl ;//출력
		}
	}

	return 0;

}
