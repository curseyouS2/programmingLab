/ quiz - 2
#include <stdio.h>
// ������ ����� ����ϴ� ����Լ�
void print_rev_int(int n)
{
	// 10 �̸��̸� ����ϰ� return
	// 10 �̻��̸�
	//    ���� ���� ����ϰ�
	//    ������ ����� ��� (����Լ� ȣ��)

	if (n < 10) {
		printf("%d", n);
	}else if(n>=10){
		printf("%d", n % 10);
		return print_rev_int(n / 10);
}

void main()
{
	print_rev_int(1234567);
	printf("\n");
	print_rev_int(1204560);
	printf("\n");
