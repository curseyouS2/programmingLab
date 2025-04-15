// 프로그래밍랩
// 1주 - C 언어 복습
// Lab01-5 : 생년월일 출력 
// 년도가 00~21 --> 2000년 ~ 2021년
// 그렇지 않은 경우 1922년 ~ 1999년
// 입력 : 210720
// 출력 : 2021년 7월 20일
// 입력 : 221003
// 출력 : 1922년 10월 3일
// 입력 : 990102
// 출력 : 1999년 1월 2일
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int birthy, birthm, birthd;
	char num[7];
	
	while (1) {
		printf("주민번호 앞자리 : ");
		scanf("%s", num);
	
		birthy = (num[0] - '0') * 10 + (num[1] - '0');
		birthm = (num[2] - '0') * 10 + (num[3] - '0');
		birthd = (num[4] - '0') * 10 + (num[5] - '0');

		if (birthy <= 21 && birthy > 9)   
			printf("20%d년 ", birthy);
		}
		else if (birthy <= 9) {
			printf("200%d년 ", birthy);
		}
		else {
			printf("19%d년 ", birthy);
		}

		printf("%d월 %d일생입니다.\n", birthm, birthd);
	}
	
	//오류체크루틴추가-시험문제?
	//ex) 월에 13월 입력하면 틀림, 마지막날이 31일, 30일, 28일인 달 구분 하는.,..
	return 0;
}