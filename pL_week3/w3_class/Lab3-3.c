// Lab3-3 실행 시간 측정
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
	// 수행시간을 측정하고자 하는 코드.... 
	for (i = 1; i <= 10000; i++)
		for (j = 1; j <=10000; j++)
			k++;
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC; //1000으로 나눈다
	printf("%lf 초입니다.\n", duration);
}
//컴퓨터에 따라 시간 다르게 나올수있다(성능차이)