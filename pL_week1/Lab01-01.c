// ���α׷��ַ�
// 1�� - C ��� ����
// Lab01-1 100���� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{	
	
	printf("2491040 ������\n");

	int n, sum = 100;
	n = 0;

	for (;sum != 0;) { //�Ǵ� while ���
		printf("sum=%d �� �� �Է�: ", sum);
		scanf("%d", &n);
		sum -= n;
	}
	if (sum == 0) {//if �� �� �ᵵ�� ����: �ݺ����� ���� ���� ���� �̹� sum=0�̱⶧��
		printf("sum=%d", sum);
	}
	


}
