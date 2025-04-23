// Lab 3-2 : 살아있는 시계
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void  main()
{
	time_t now;
	struct tm* tp;
	char* weeks[] = { "일", "월", "화", "수", "목", "금", "토" };

	while (1) {
		now = time(NULL);
		//printf("현재시간 : %s", ctime(&now));
		//printf("%d\r", time(NULL));	// '\r'?
		tp = localtime(&now);	
		printf("2491040 강주현\n");
		printf("%d년 %d월 %d일 %s요일 %d시 %d분 %d초\r",	// '\r': 캐리지 리턴...커서를 줄의 맨 앞으로 이동, '\n': 라인 피드
			tp->tm_year + 1900, tp->tm_mon + 1, tp->tm_mday, 
			weeks[tp->tm_wday], tp->tm_hour, tp->tm_min, tp->tm_sec);
	}
	return 0;
}