#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int r1, r2, dice[13]; // �ʿ��ϸ� ���� �߰�
	int n, i, j, hist;

	// ���� �ʱ�ȭ
	srand(time(NULL));
	// 50000 �� ����
		// Ȯ���� ���۵� �ֻ��� 2�� ���� ���� dice[] ���� ������Ų��.
	// 2~12 ���� ���Ͽ�
		// �߻� �� %�� Histogram�� ����Ѵ�.
		// *�� ���� �Ҽ����� ������ +1�� ����Ѵ�.
	for (i = 0; i < 50000; i++) {
		r1 = rand() % 10;
		r2 = rand() % 10;
		if (!(r1 == 2 || r1 == 3 || r1 == 4 || r1 == 5)) {
			r1 = 6;
		}
		if (!(r2 == 1 || r2 == 2 || r2 == 4 || r2 == 5 || r2==6)) {
			r2 = 3;
		}

		dice[r1+r2]++;
	}

	for (j = 0; j < 13; j++) {
		printf("%d\n", dice[j]);
	}




}
