// Lab01-4 x, y ���� ��ȯ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int x;
int y;

void swap(int *px, int *py)
{	
	//���� �ּҸ� �ٲ۴�
	int temp = *px;
	*px = *py;
	*py = temp;
}
void main()
{
	int x = 100, y = 200;

	printf("swap() ȣ�� �� x=%d y=%d\n", x, y);
	swap(&x, &y);
	printf("swap() ȣ�� �� x=%d y=%d\n", x, y);
}