#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int r1, r2, dice[13]; // 필요하면 변수 추가
	int n, i, j, hist;

	// 난수 초기화
	srand(time(NULL));
	// 50000 번 동안
		// 확률이 조작된 주사위 2개 합을 구해 dice[] 값을 증가시킨다.
	// 2~12 값에 대하여
		// 발생 빈도 %와 Histogram을 출력한다.
		// *의 수는 소숫점이 있으면 +1개 출력한다.
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
