#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int n; // 총 정수 개수 N
	int array[100]; //수 입력
	int v; //정수 v
	int cnt = 0; // 개수 카운터 

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);

	}
	scanf("%d", &v);

	for (int j = 0; j < n; j++) {
		if (array[j] == v)
			cnt++;
	}
	printf("%d", cnt);

			return 0;
}
