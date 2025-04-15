// 프로그래밍랩
// 1주 - C 언어 복습
// Lab01-1 100에서 빼기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{	
	
	printf("2491040 강주현\n");

	int n, sum = 100;
	n = 0;

	for (;sum != 0;) { //또는 while 사용
		printf("sum=%d 뺄 값 입력: ", sum);
		scanf("%d", &n);
		sum -= n;
	}
	if (sum == 0) {//if 꼭 안 써도됨 이유: 반복에서 빠져 나온 순간 이미 sum=0이기때문
		printf("sum=%d", sum);
	}
	


}
