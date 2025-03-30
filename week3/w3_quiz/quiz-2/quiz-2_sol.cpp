#include <stdio.h>
void main()
{
	int i, j, m;
	int gugu[10][9];
	gugu[9][8] = 0;
	// gugu[][] ���
	// gugu[][] ���
	//�迭 �ε����� ���ϴ� �� ������ ���踦 ����...
	for (i = 1;i <= 9;i++) {
		gugu[i - 1][8] = 0;
		gugu[9][j - 2] = 0;
		for (j = 2;j <= 9;j++) {
			m = j * i;
			gugu[i - 1][j - 2] = m;
			gugu[i - 1][8] += m;
			gugu[9][j - 2] += m;
			gugu[9][8] += m;
		}
	}

	for (i = 1;i <= 9;i++) {
		for (j = 2;j <= 9;j++) {
			printf("%d*%d=%2d|",j,i,gugu[i-1][j-2]);
		}
		printf("   %3d|\n", gugu[i - 1][8]);
	}
}
