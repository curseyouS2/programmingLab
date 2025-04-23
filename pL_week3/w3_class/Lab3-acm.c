// Lab3-ACM
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 단위 분수의 합으로 a/b 를 구하고 가장 마지막 단위분수 1/x 를 구하고
// x 를 return 한다.
// 1/x1 <= a/b 인 최대값 x1을 구하고 a/b 에서 1/x1을 뺀 값에 대하여 반복한다.
#define MAX(x, y) ((x>y) ? (x) : (y))
#define MIN(x, y) ((x<y) ? (x) : (y))

int find_last_x(int a, int b)
{
	int x, a_temp, b_temp;
	//x 찾기
	for (i = 1; i < b; i++) {
		if (b < a*i= == 1) {
			x = i;
		}
	}
	a_temp = a * x - b;
	b_temp = b * x;
	if (b_temp % a_temp == 0) {
		b = b_temp / a_temp;
		a = 1;
	}
	return x;
}
void main()
{
	int n_test;
	int a, b; // a/b
	scanf("%d", &n_test);
	while (n_test--) {
		scanf("%d %d", &a, &b); // input a  b
		//printf("%d/%d = ", a, b);
		printf("%d\n", find_last_x(a, b));
	}
}