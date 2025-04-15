// Lab01-2 홀수 합 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int oddsum1(int n)
{
	int i;
	int sum = 0;
	if (n % 2 == 0) {
		n -= 1;
	}
	for (i = n;i > 0;i -= 2) {
		sum += i;
		//i++해도 되긴하는데 그냥 +2하는게 간단하다(실행시간이 절반)
	}
	return sum;
}

int oddsum2(int n)
{
	if (n % 2 == 0) {
		n -= 1;
	}
	int i = n;
	int sum = 0;
	while (i >0) {
		sum += i;
		i -= 2;
	}
	return sum;
}
int oddsum3(int n)
{
	if (n % 2 == 0) {	// n이 짝수면 n을 홀수로 만든다
		n -= 1;
	}
	if (n <= 1) { //재귀함수: 끝나는조건 먼저 쓸 것
		return 1;
	}
	else {

		return n + oddsum3(n - 2);
	}

}
void main()
{
	int n = 100;
	int SUM = 0;
	int i;
	printf("(1) for oddsum1(%d) = %d\n", n, oddsum1(n));
	printf("(2) while oddsum2(%d) = %d\n", n, oddsum2(n));
	printf("(3) 재귀 oddsum3(%d) = %d\n", n, oddsum3(n));
	// SUM 을 구한다.
	
	for (i = 100 ;i > 0;i -= 2) {
		SUM += oddsum1(i);
	}
	printf("(4) SUM = %d\n", SUM);
}