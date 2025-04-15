// Lab01-7 숫자 뒤집고 2배수 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int x, y, z;
	int cal;
	y = 0;
	printf("정수 x 입력 : ");
	scanf("%d", &x);

	while (x != 0) {
		y = y * 10 + (x % 10);		//일의자리수: 10으로 나눈 나머지...
								//그 후 자리수를 올리기위해 10을 곱한다.

		x /= 10;				//x를 10으로 나눈 몫 -> 기존의 일의자리가 잘려나간 형태가 됨
	}

	z = y * 2;

	printf("뒤집은 수 y = %d 그 수의 2배 수 z = %d\n", y, z);
}