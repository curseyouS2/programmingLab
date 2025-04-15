//  1�б� ���α׷��ַ�
// Lab4-4 ����ü ����
#include <stdio.h>
typedef struct complex {
	int real;
	int img;
} COMPLEX;
#define ABS(x) ((x>0) ? (x) : (-x))
void print_complex(COMPLEX *x)
{	//�پ��� ���̽�...0�� ������ ���̽� ������������ ���̽� ����� ������ ���̽�....���蹮��?
	//real=0,or ���°��... ...i = 0? <0, 0>���°��...
	if (x->img >= 0)
		printf("(%d + %di)", x->real, x->img);
	else
		printf("(%d - %di)", x->real, x->img);
}

COMPLEX add(COMPLEX x, COMPLEX y)
{	
	COMPLEX z;
	z.real = x.real + y.real;
	z.img = x.img + y.img;
}

COMPLEX sub(COMPLEX x, COMPLEX y)
{	
	COMPLEX z;
	z.real = x.real - y.real;
	z.img = x.img - y.img;
}

void main()
{
	COMPLEX x, y, z;

	scanf("%d %d", &x.real, &x.img);
	scanf("%d %d", &y.real, &y.img);
	z = add(x, y);
	print_complex(&x); printf(" + "); print_complex(&y);
	printf(" = ");print_complex(&z);
	printf("\n");
	
	z = sub(x, y);
	print_complex(&x); printf(" - ");print_complex(&y);
	printf(" = ");print_complex(&z);
	printf("\n");
}
