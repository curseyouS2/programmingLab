#include <stdio.h>
void main()
{
	int i, j, m;
	int gugu[10][9];
	// gugu[][] 계산
	for (i = 0;i < 10;i++) {
		for (j = 0;j < 8;j++) {
			for (m = 1;m < 9;m++) {
				gugu[i][j] = (j + 2) * m;
				gugu[i][8] += gugu[i][j];
			}
			//printf("%d", gugu[i][j]);
			gugu[i][0] += gugu[i][j];
		}
		
	}
	 
	
	// gugu[][] 출력
	for (i = 0;i < 10;i++) {
		for (j = 0;j < 8;j++) {
			printf("%d*%d=%2d|", i+2, j+1, gugu[i][j]);
		}
		printf("%d\n", gugu[i][8]);
	}

}
