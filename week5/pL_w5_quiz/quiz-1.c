#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 3�� ����� ���� ����Լ��� ���Ѵ�.
int trisum(int n)
{	
	n = n / 3 * 3;
	return n + trisum(n - 3);
	/*if (n % 3 == 1) {
		n -= 1;
	}
	else if (n % 3 == 2) {
		n -= 2;
	}
	return n + trisum(n - 3);*/	//�ٸ� �� �椲�ä��� ū ���̤����� ���줤��
	
	//�ι�° ��� 
	//n = n / 3 * 3;
	//return n + trisum(n - 3);
	
	//���������� 
	//n -= n % 3;
	//return n + trisum(n - 3);
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
