// 제약 조건
// 함수 추가하지 말 것 reverse() 금지
// main에 변수 추가하지 말 것
// string.h 의 함수 쓰지 말 것 strlen() 금지
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #include <string.h>
void main()
{
	int T, i, len;
	char str[81];
	printf("2491040 강주현\n");
	// T 입력
	scanf("%d", &T);
	// T 횟수 만큼
	while (T--) {
		scanf("%s", str);
		for (len = 0;len < 81;len++) {
			if (str[len] == '\0') {
				break;
			}
		}
		for (i=len ;i >= 0;i--) {
			if (str[i] == '\0') {
				continue;
			}
			else {
				printf("%c", str[i]);
			}
		}
		printf("\n");

	}
		// 문자열 입력
		// 뒤집어서 출력
}


