// Lab3-3 ���� �ð� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
void main(void)
{
	clock_t start, finish;
	double duration = 0.;
	int i, j, k=0;

	start = clock();
	// ����ð��� �����ϰ��� �ϴ� �ڵ�.... 
	for (i = 1; i <= 10000; i++)
		for (j = 1; j <=10000; j++)
			k++;
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC; //1000���� ������
	printf("%lf ���Դϴ�.\n", duration);
}
//��ǻ�Ϳ� ���� �ð� �ٸ��� ���ü��ִ�(��������)