#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("2491040 ������\n");
	
	int n, i, sum;
	sum = 0;
	// n �Է�
	printf("�����Է� : ");
	scanf("%d", &n);
	printf("��� : ");
	// ������� ��� ����ϰ� sum�� ���Ѵ�.
	for (i = 1;i <= n / 2 ;i++) {
		if (n % i == 0) {
			printf(" %d", i);
			sum += i;
		}
	}
	// sum�� ����Ѵ�.
	printf(" += %d", sum);

	return 0;
}