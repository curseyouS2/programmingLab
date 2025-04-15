#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("quiz 1¹ø\n");

	int sum;

	for (int i=2;i < 10;i++) {
		sum = 0;
		for (int j=1;j < 10;j++) {
			printf("%d*%d=%2d ", i, j, i * j);
			sum += i * j;
		}
		printf("= %3d\n", sum);
	}
	return 0;
}