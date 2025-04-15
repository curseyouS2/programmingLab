// Lab3-6 타이머
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
void main(void)
{
	int timer;
	clock_t start, now, remain = 0;
	clock_t duration, sec, min, hour, milsec;
	printf("Timer 정할 시간(초) 입력 : ");
	scanf("%d", &timer);
	start = clock();
	while (1) {
		// now = 
		// 지나간 시간 duration = 
		// 남은 시간 remain = 
		// 남은 시간 출력
		if (remain == 0)
			break;

	}
	printf("\n알람!!\a\n");
}
