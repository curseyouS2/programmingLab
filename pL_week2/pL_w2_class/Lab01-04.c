// Lab01-4 x, y 서로 교환
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int x;
int y;

void swap(int *px, int *py)
{	
	//서로 주소를 바꾼다
	int temp = *px;
	*px = *py;
	*py = temp;
}
void main()
{
	int x = 100, y = 200;

	printf("swap() 호출 전 x=%d y=%d\n", x, y);
	swap(&x, &y);
	printf("swap() 호출 후 x=%d y=%d\n", x, y);
}