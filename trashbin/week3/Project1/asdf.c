// Lab3-ACM
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
// ���� �м��� ������ a/b �� ���ϰ� ���� ������ �����м� 1/x �� ���ϰ�
// x �� return �Ѵ�.
// 1/x1 <= a/b �� �ִ밪 x1�� ���ϰ� a/b ���� 1/x1�� �� ���� ���Ͽ� �ݺ��Ѵ�.
#define MAX(x, y) ((x>y) ? (x) : (y))
#define MIN(x, y) ((x<y) ? (x) : (y))

int find_last_x(int a, int b)
{
	int x, a_temp, b_temp;
	//x ã��
	while (a != 1) {
		
		//printf("a b�� %d %d\n", a, b);
		for (int i = 1; i < b; i++) {
			if ((b < a * i) == 1) {
				x = i;
				//printf("x�� %d\n", x);
				break;
			}
		}
		a_temp = a * x - b;
		if (a_temp == 1) {
			b_temp = b;
		}
		else {
			b_temp = b * x;
			//printf("b_temp�� %d\n", b_temp);
		}
	    //���
		for (int j = a_temp;j > 1;j--) {
			if (a_temp % j == 0 && b_temp % j == 0) {
				a_temp = a_temp / j;
				b_temp = b_temp / j;
			}
		}
		a = a_temp;
		b = b_temp;
		//printf("at bt �� %d %d\n", a_temp, b_temp);
	}
	return x*b;
	
}
void main()
{
	printf("2491040 ������\n");
	int n_test;
	int a, b; // a/b
	scanf("%d", &n_test);
	while (n_test--) {
		scanf("%d %d", &a, &b); // input a  b
		//printf("%d/%d = ", a, b);
		printf("%d\n", find_last_x(a, b));
	}
	Sleep(10000);
}