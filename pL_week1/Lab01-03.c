// Lab01-3 
// 1�� 1���� �������̶�� �����ϰ�
// �Է��� ���� �޷��� ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int startday, daysum= 0, blank, i, month;				//startday ������ ����ؼ� �տ� ��ĭ�� �������
	int m[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	printf("��� ���� �Է� : ");
	scanf("%d", &month);
	printf("�� �� ȭ �� �� �� ��\n");
	startday = 1;
	for (i = 0;i < month-1;i++) {
		daysum += m[i];
	}
	blank = (daysum + startday) % 7;
	for (i = 0; i <= blank; i++) {
		printf("   ");
	}
	for (i = 1;i <= m[month-1]; i++) {			//�� ���� 7�� ���� �������� �̿��սô�..
		printf(" %2d", i);						//�ſ� 1�� �տ� ��ĭ���,,,				
		if ((i + blank) % 7 == 0)
			printf("\n");
	}

}