// Lab01-2 Ȧ�� �� ���ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int oddsum1(int n)
{
	int i;
	int sum = 0;
	if (n % 2 == 0) {
		n -= 1;
	}
	for (i = n;i > 0;i -= 2) {
		sum += i;
		//i++�ص� �Ǳ��ϴµ� �׳� +2�ϴ°� �����ϴ�(����ð��� ����)
	}
	return sum;
}

int oddsum2(int n)
{
	if (n % 2 == 0) {
		n -= 1;
	}
	int i = n;
	int sum = 0;
	while (i >0) {
		sum += i;
		i -= 2;
	}
	return sum;
}
int oddsum3(int n)
{
	if (n % 2 == 0) {	// n�� ¦���� n�� Ȧ���� �����
		n -= 1;
	}
	if (n <= 1) { //����Լ�: ���������� ���� �� ��
		return 1;
	}
	else {

		return n + oddsum3(n - 2);
	}

}
void main()
{
	int n = 100;
	int SUM = 0;
	int i;
	printf("(1) for oddsum1(%d) = %d\n", n, oddsum1(n));
	printf("(2) while oddsum2(%d) = %d\n", n, oddsum2(n));
	printf("(3) ��� oddsum3(%d) = %d\n", n, oddsum3(n));
	// SUM �� ���Ѵ�.
	
	for (i = 100 ;i > 0;i -= 2) {
		SUM += oddsum1(i);
	}
	printf("(4) SUM = %d\n", SUM);
}