// Lab3-ACM
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ���� �м��� ������ a/b �� ���ϰ� ���� ������ �����м� 1/x �� ���ϰ�
// x �� return �Ѵ�.
// 1/x1 <= a/b �� �ִ밪 x1�� ���ϰ� a/b ���� 1/x1�� �� ���� ���Ͽ� �ݺ��Ѵ�.
#define MAX(x, y) ((x>y) ? (x) : (y))
#define MIN(x, y) ((x<y) ? (x) : (y))

int find_last_x(int a, int b)
{
	int x, a_temp, b_temp;
	//x ã��
	for (i = 1; i < b; i++) {
		if (b < a*i= == 1) {
			x = i;
		}
	}
	a_temp = a * x - b;
	b_temp = b * x;
	if (b_temp % a_temp == 0) {
		b = b_temp / a_temp;
		a = 1;
	}
	return x;
}
void main()
{
	int n_test;
	int a, b; // a/b
	scanf("%d", &n_test);
	while (n_test--) {
		scanf("%d %d", &a, &b); // input a  b
		//printf("%d/%d = ", a, b);
		printf("%d\n", find_last_x(a, b));
	}
}