#include <stdio.h>
void main()
{
	int i, m;
	int j = 2;
	int gugu[10][9] = { 0 };	//�迭 ��ü �ʱ�ȭ

	// gugu[][] ���
	// gugu[][] ���
	//�迭 �ε����� ���ϴ� �� ������ ���踦 ����...
	for (i = 1;i <= 9;i++) {
		for (j = 2;j <= 9;j++) {
			m = j * i;
			gugu[i - 1][j - 2] = m;
			gugu[i - 1][8] += m;
			gugu[9][j - 2] += m;
			gugu[9][8] += m;
		}
	}

	for (i = 1;i <= 9;i++) {
		for (int j = 2;j <= 9;j++) {
			printf("%d*%d=%2d|",j,i,gugu[i-1][j-2]);
		}
		printf("   %3d|\n", gugu[i - 1][8]);
	}
	for (i = 0;i < 9;i++) {
		printf("------|");
	}
	printf("\n");
	for (j = 0;j < 9;j++) {
		printf("  %4d|", gugu[9][j]);
	}
	printf("\n");
	printf("---------------------------------------------------------------");
}
