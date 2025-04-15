// 1학기 프로그래밍랩 - 4주
// Lab4-1 재귀함수

#include <stdio.h>
int sum(int n)
{
	if (n <= 1) {
		return 1;
	}
	return n + sum(n - 1);

}
int oddsum(int n) // 홀수의 합
{
	if (n <= 1) {
		return 1;
	}
	if (n % 2 == 0) {	//n이 짝수면 홀수로 만들어준다...
		return oddsum(n - 1);
	}
	else {
		return oddsum(n - 2);
	}
}
int evensum(int n) // 짝수의 합
{

}
int factorial(int n)
{
	if (n <= 1) {
		return 1;
	}
	else
		return n * factorial(n - 1);
}

int fibo(int n) // recursive 방식
{	
	if (n <= 1) {
		return n;
	}

}

int gcd(a, b) // 최대 공약수
{

}
void binary(int n)
{
	if (n < 2)
		printf(" %d", n);
	else {
		binary(n / 2);
		printf" %d", n % 2);
	}
}
void jinbub(int n, int k) // 10진수 n을 k진법으로 출력
{
	if (n < k)
		printf("%d", n);
	else {
		junbub(n / k, k);
		printf"%d", n % k);
	}

}
void main()
{
	int i, k, n = 10;
	printf("sum(%d) = %d\n", n, sum(n));
	n = 10;
	//printf("oddsum(%d) = %d\n", n, oddsum(n));
	n = 11;
	//printf("evensum(%d) = %d\n", n, evensum(n));
	printf("factorial(%d) = %d\n", n, factorial(n));
	printf("fibonacci = ");
	for (i=0;i<=30;i++)
		printf("%d ", fibo(i));
		//printf("%d:%d ", i, fibo(i));
	printf("\n");
	n = 12345;
	printf("binary(%d) = ", n);
	binary(n);
	printf("\n");

	n = 0x12abcdef; // 313249263
/*	
	printf("n=%d\n", n);
	for (k = 2; k <= 10; k++) {
		printf("%d진법 : ", k);
		jinbub(n, k);
		printf("\n");
	}
	k = 16;
	printf("%d진법 : ", k);
	jinbub(n, k);
	printf("\n");
*/

}