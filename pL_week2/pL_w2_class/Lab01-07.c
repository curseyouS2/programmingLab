// Lab01-7 ���� ������ 2��� ���ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int x, y, z;
	int cal;
	y = 0;
	printf("���� x �Է� : ");
	scanf("%d", &x);

	while (x != 0) {
		y = y * 10 + (x % 10);		//�����ڸ���: 10���� ���� ������...
								//�� �� �ڸ����� �ø������� 10�� ���Ѵ�.

		x /= 10;				//x�� 10���� ���� �� -> ������ �����ڸ��� �߷����� ���°� ��
	}

	z = y * 2;

	printf("������ �� y = %d �� ���� 2�� �� z = %d\n", y, z);
}