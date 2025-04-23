// quiz5-1
#include <stdio.h>
// 3의 배수의 합을 재귀함수로 구한다.
int trisum(int n)
{	
	if (n % 3 == 1) {
		n = n - 1;
	}
	else if (n % 3 == 2) {
		n = n - 2;
	}
	else if (n == 0) {
		return 0;
	}
	return n + trisum(n - 3);
	
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

