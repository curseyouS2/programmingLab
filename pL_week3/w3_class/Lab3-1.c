// Lab 3-1 : ���� �ð�
//
//time_t : �ý����� ���� �ð��� �����´�. (1970�� ���� 1�� ������ ���� ��)
//time_t time(time_t *timer);
//timer : �ð��� ����� �������� ��ġ
//��ȯ�� : 1970�� 1�� 1�Ϻ��� ����� �ð��� �����ش�.
//ctime : UTC�� �ð��� ���� ����(�츮���� ǥ�ؽð�)�� �°� �ð��� �ٲپ� �ش�. 
//char *ctime(const time_t *timer);
//timer : �ð��� ����� ������
// struct tm *localtime(const time_t *timer) : ����ð�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

//struct tm { /* a broken-down time */
//int tm_sec; /* seconds after the minute: [0 - 60] */
//int tm_min; /* minutes after the hour: [0 - 59] */
//int tm_hour; /* hours after midnight: [0 - 23] */
//int tm_mday; /* day of the month: [1 - 31] */
//int tm_mon; /* months since January: [0 - 11] */
//int tm_year; /* years since 1900 */
//int tm_wday; /* days since Sunday: [0 - 6] */
//int tm_yday; /* days since January 1: [0 - 365] */
//int tm_isdst; /* daylight saving time flag: <0, 0, >0 */
//};

int main()
{
	time_t now;
	struct tm* tp;
	char* weeks[] = { "��", "��", "ȭ", "��", "��", "��", "��" }; //�Ͽ����� 0...

	now = time(NULL); //time(&now); //
	//now = 0; //���� �ʱ� �ð�!


	//printf("ctime() : %s", ctime(&now));	//ctime=char time...

	tp = localtime(&now);	//�߶��ش�
	printf("2491040 ������\n");
	printf("now = %d\n", now);
	printf("%d�� %d�� %d�� %s���� %d�� %d�� %d��\n", 
		tp->tm_year+1900/*+1900�� �ؾ� ������ �⵵�� ��*/, 
		tp->tm_mon+1/*1���� 0���̶�� �����صξ���...+1�������*/, 
		tp->tm_mday, weeks[tp->tm_wday], tp->tm_hour, tp->tm_min, tp->tm_sec);
	

	return 0;
}