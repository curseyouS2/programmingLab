#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("2491040 강주현\n");
	
	int n, i, sum;
	sum = 0;
	// n 입력
	printf("정수입력 : ");
	scanf("%d", &n);
	printf("약수 : ");
	// 약수들을 모두 출력하고 sum을 구한다.
	for (i = 1;i <= n / 2 ;i++) {
		if (n % i == 0) {
			printf(" %d", i);
			sum += i;
		}
	}
	// sum을 출력한다.
	printf(" += %d", sum);

	return 0;
}