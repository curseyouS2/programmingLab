// Lab 3-2 : ����ִ� �ð�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void  main()
{
	time_t now;
	struct tm* tp;
	char* weeks[] = { "��", "��", "ȭ", "��", "��", "��", "��" };

	while (1) {
		now = time(NULL);
		//printf("����ð� : %s", ctime(&now));
		//printf("%d\r", time(NULL));	// '\r'?
		tp = localtime(&now);	
		printf("2491040 ������\n");
		printf("%d�� %d�� %d�� %s���� %d�� %d�� %d��\r",	// '\r': ĳ���� ����...Ŀ���� ���� �� ������ �̵�, '\n': ���� �ǵ�
			tp->tm_year + 1900, tp->tm_mon + 1, tp->tm_mday, 
			weeks[tp->tm_wday], tp->tm_hour, tp->tm_min, tp->tm_sec);
	}
	return 0;
}