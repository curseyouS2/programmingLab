// ���α׷��ַ� 5��
// Lab5-2 �ֻ��� 
// (1) n�� ������ ������ ���� �߻� Ȯ�� ����� ����
// (2) Ȯ���� ���۵� �ֻ��� 
//		1~5 = 10%, 6 = 50% ��, 6�� ���� ������ �ֻ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int i, r, ntest, dice;
	int count[6] = {0}; // 1 ~ 6 count �� ����
	srand(time(NULL)); // ���� �ʱ�ȭ
	printf("�ֻ��� Ƚ�� : ");
	scanf("%d", &ntest);
	printf("�������� �ֻ���\n");
	for (i=0;i<ntest;i++) {
		// dice = ?? 0~5 -> �ֻ��� 1~6
		// count[?] = �߻� ȸ�� ����, �ϼ��� ��
	}
	for (i=0;i<6;i++) {
		// ȭ��� ���� ���
	}
	printf("\n");

	// �̻��� �ֻ���
	printf("\n�̻��� �ֻ��� 6�� 50%% Ȯ��\n");
	for (i=0;i<6;i++)
		count[i] =0;
	for (i=0;i<ntest;i++) {
		// ������ 0~99�� ���ϰ� 0~9, 10~19, 20~29, 30~39, 40~49, 50~99 ��
		// 1, 2, 3, 4, 5, 6 ���� ����
		// �߻� ȸ�� ����
	}
	for (i=0;i<6;i++) {
		// ȭ��� ���� ���
	}

}