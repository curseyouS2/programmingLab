// 1학기 프로그래밍랩 - 4주
// Lab4-1 재귀함수

#include <stdio.h>
int sum(int n)
{	if (n == 1) {
		return 1;
	}
	return n + sum(n - 1);
}
int oddsum(int n) // 홀수의 합
{
	printf("%d ", n);
	if (n == 1) {
		return 1;
	}
	if (n % 2 == 0) {
		n--;
	}
	return n + oddsum(n - 2); //바보다...
}
int evensum(int n) // 짝수의 합
{
	printf("%d ", n);
	if (n == 0) {
		return 0;
	}
	if (n % 2 != 0) {
		n--;
	}
	return n + evensum(n - 2);

}
int factorial(int n)
{	
	if (n == 1) {
		return 1;
	}
	return n * factorial(n - 1);
}

int fibo(int n) // recursive 방식
{
	if (n <= 1)
		return n;
	else
		return fibo(n - 1) + fibo(n - 2);
}

int gcd(int a, int b) // 최대 공약수
{
	if (a == 0)
		return b;
	else
		return gcd(b % a, a);
}
void binary(int n)
{
	if (n < 2)
		printf("%d", n);
	else {
		binary(n / 2);
		printf("%d", n % 2);
	}

}
void jinbub(int n, int k) // 10진수 n을 k진법으로 출력
{
	if (n < k) {
		if (n < 10)
			printf("%d", n);
		else
			printf("%c", 'A' + (n - 10));
	}
	else {
		jinbub(n / k, k);
		int remainder = n % k;
		if (remainder < 10)
			printf("%d", remainder);
		else
			printf("%c", 'A' + (remainder - 10));
	}

}
void main()
{
	printf("2491040 강주현\n");

	int i, k, n = 10;
	printf("sum(%d) = %d\n", n, sum(n));
	printf("oddsum(%d) = %d\n", n, oddsum(n));
	printf("evensum(%d) = %d\n", n, evensum(n));
	printf("factorial(%d) = %d\n", n, factorial(n));

	n = 10;
	
	printf("factorial(%d) = %d\n", n, factorial(n));

	printf("fibonacci = ");
	for (i=0;i<=10;i++)
		printf("%d ", fibo(i));
	printf("\n");
	
	printf("gcd(16, 36) = %d\n", gcd(16, 36));

	n = 12345;
	
	printf("binary(%d) = ", n);
	binary(n);
	
	n = 0x12abcdef; // 313249263
	for (int r = 2;r <= 10;r++) {
		printf("\n%d진법 : ", r);
		jinbub(n, r);
	}
	printf("\n16진법 : ");
	jinbub(n, 16);

}

/* 상태를 정의 ?
...연산이 항상 같도록...
순환적 정의
최초....는
상태에 상태를..
*/
