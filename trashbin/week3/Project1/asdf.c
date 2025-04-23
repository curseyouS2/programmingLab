// Lab3-ACM
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
// 단위 분수의 합으로 a/b 를 구하고 가장 마지막 단위분수 1/x 를 구하고
// x 를 return 한다.
// 1/x1 <= a/b 인 최대값 x1을 구하고 a/b 에서 1/x1을 뺀 값에 대하여 반복한다.
#define MAX(x, y) ((x>y) ? (x) : (y))
#define MIN(x, y) ((x<y) ? (x) : (y))

int find_last_x(int a, int b)
{
	int x, a_temp, b_temp;
	//x 찾기
	while (a != 1) {
		
		//printf("a b는 %d %d\n", a, b);
		for (int i = 1; i < b; i++) {
			if ((b < a * i) == 1) {
				x = i;
				//printf("x는 %d\n", x);
				break;
			}
		}
		a_temp = a * x - b;
		if (a_temp == 1) {
			b_temp = b;
		}
		else {
			b_temp = b * x;
			//printf("b_temp는 %d\n", b_temp);
		}
	    //약분
		for (int j = a_temp;j > 1;j--) {
			if (a_temp % j == 0 && b_temp % j == 0) {
				a_temp = a_temp / j;
				b_temp = b_temp / j;
			}
		}
		a = a_temp;
		b = b_temp;
		//printf("at bt 는 %d %d\n", a_temp, b_temp);
	}
	return x*b;
	
}
void main()
{
	printf("2491040 강주현\n");
	int n_test;
	int a, b; // a/b
	scanf("%d", &n_test);
	while (n_test--) {
		scanf("%d %d", &a, &b); // input a  b
		//printf("%d/%d = ", a, b);
		printf("%d\n", find_last_x(a, b));
	}
	Sleep(10000);
}