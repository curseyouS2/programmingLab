#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 3의 배수의 합을 재귀함수로 구한다.
int trisum(int n)
{	
	n = n / 3 * 3;
	return n + trisum(n - 3);
	/*if (n % 3 == 1) {
		n -= 1;
	}
	else if (n % 3 == 2) {
		n -= 2;
	}
	return n + trisum(n - 3);*/	//다만 이 방ㅂㅓㅂ은 큰 수이ㄹㄸㅐ 불펴ㄴ하
	
	//두번째 방법 
	//n = n / 3 * 3;
	//return n + trisum(n - 3);
	
	//세버ㄴㅉㅐ 
	//n -= n % 3;
	//return n + trisum(n - 3);
}
void main()
{
	int n;
	n = 12;
	printf("trisum(%d) = %d\n", n, trisum(n));
	n = 13;
	printf("trisum(%d) = %d\n", n, trisum(n));
	n = 14;
	printf("trisum(%d) = %d\n", n, trisum(n));
	n = 15;
	printf("trisum(%d) = %d\n", n, trisum(n));
}
