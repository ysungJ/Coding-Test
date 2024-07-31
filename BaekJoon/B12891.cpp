//유효한 코드 번호 구현하기 
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//비밀번호 체크 배열, 현재 상태 배열
//판단 변수, 문자열크기, 부분문자열 크기, 문자열데이터 , 유효한 번호 판단하는 변수
int checkArr[4];
int myArr[4];
int checkSecret = 0;
void Add(char c);
void Remove(char c);

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int S, P;
	int result = 0;

	cin >> S >> P;
	string A;
	cin >> A;

	for (int i = 0; i < 4; i++) {
		cin >> checkArr[i];
		if (checkArr[i] == 0) {
			checkSecret++;
		}
	}
	//초기 p부분 문자열 처리
	for (int i = 0; i < P; i++) {
		Add(A[i]);
	}
	if (checkSecret == 4) {
		result++;
	}
	//슬라이딩 윈도우 처리 
	for (int i = P; i < S; i++) {
		int j;
		j = i - P;
		Add(A[i]);
		Remove(A[j]);
		//4자리 수에 대한 크기가 모두 충족 되었을 때 유효한 비밀번호 
		if (checkSecret == 4) {
			result++;
		}
	}
	cout << result << endl;
		return 0;
}
//새로 들어온 문자를 처리하는 함수
void Add(char c) {

	switch (c) {
	case 'A':
		myArr[0]++;
		if (myArr[0] == checkArr[0])
			checkSecret++;
		break;
	case 'C' :
		myArr[1]++;
		if (myArr[1] == checkArr[1])
			checkSecret++;
		break;
	case 'G':
		myArr[2]++;
		if (myArr[2] == checkArr[2])
			checkSecret++;
		break;
	case 'T':
		myArr[3]++;
		if (myArr[3] == checkArr[3])
			checkSecret++;
		break;
	}
}

//제거할 문자를 처리하는 함수
void Remove(char c) {

	switch (c) {
	case 'A':
		if (myArr[0] == checkArr[0])
			checkSecret--;
		myArr[0]--;
		break;
	case 'C':
		if (myArr[1] == checkArr[1])
			checkSecret--;
		myArr[1]--;
		break;
	case 'G':
		if (myArr[2] == checkArr[2])
			checkSecret--;
		myArr[2]--;
		break;
	case 'T':
		if (myArr[3] == checkArr[3])
			checkSecret--;
		myArr[3]--;
		break;
	}
}
