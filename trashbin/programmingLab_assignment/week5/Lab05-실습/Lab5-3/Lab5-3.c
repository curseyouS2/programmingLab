// ���α׷��ַ� 5��
// Lab5-3 Lotto ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int i, n, l;
	//srand(time(NULL);
	//printf("���� �� ���� : ");
	//scanf("%d", &l);
	for (i = 0; i < 6; i++) {
			n = rand() % 45 + 1;
			printf("%2d ", n);
	}
}
