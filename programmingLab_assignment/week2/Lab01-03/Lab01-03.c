// Lab01-3 
// 1월 1일이 월요일이라고 가정하고
// 입력한 월의 달력을 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int startday, daysum = 0, blank, i, month;				//startday 변수를 사용해서 앞에 빈칸을 출력하자
	int m[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	printf("출력 월을 입력 : ");
	scanf("%d", &month);
	startday = 1;
	for (i = 0;i < month - 1;i++) {
		daysum += m[i];
	}
	daysum += startday;
	daysum %= 7;
	
	printf("일 월 화 수 목 금 토\n");
	//blank = (daysum + startday) % 7;
	for (i = 0; i < daysum; i++) {
		printf("   ");
	}

	for (i = 1;i <= m[month - 1]; i++) {			//각 달의 7로 나눈 나머지를 이용합시다..
		printf(" %2d", i);						//매월 1일 앞에 빈칸출력,,,				
		if ((i + daysum) % 7 == 0)
			printf("\n");
	}

}